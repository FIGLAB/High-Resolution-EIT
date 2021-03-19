class AD5930{
  public:
    AD5930();
    void startEmitting(void);
    void myBegin(void);
  private:
    void togglePin(int);
    void configAD5930(void);
    void spiWriteWord(uint16_t);
    void setNumIncr(uint16_t);
    void setDeltaFreq(long);
    void setStartFreq(uint32_t);
};

