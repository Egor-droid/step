#ifndef STEP_H_INCLUDED
#define STEP_H_INCLUDED
class step{
    private:
        byte step;
        byte dir;
        byte ms1;
        byte ms2;
        byte ms3;
    public:
        long pos=0;
        step(byte step, byte dir, byte ms1, byte ms2, byte ms3){
            step=step;
            dir=dir;
            ms1=ms1;
            ms2=ms2;
            ms3=ms3;
            pinMode(step, OUTPUT);
            pinMode(dir, OUTPUT);
            pinMode(ms1, OUTPUT);
            pinMode(ms2, OUTPUT);
            pinMode(ms3, OUTPUT);
        }
        void move(long cord=0, bool rel=0, byte speed=128, byte ms=16){
            cord+=pos*rel;
            digitalWrite(dir, pos>cord);
            digitalWrite(ms1, ms==2||ms>4);
            digitalWrite(ms2, ms>2);
            digitalWrite(ms3, ms==16);
            for(pos=pos; pos!=cord; pos+=copysign(16, cord-pos)/ms){
                digitalWrite(step, 1);
                delay(256-speed);
                digitalWrite(step, 0);
                delay(256-speed);
            }
        }
};
#endif // STEP_H_INCLUDED
