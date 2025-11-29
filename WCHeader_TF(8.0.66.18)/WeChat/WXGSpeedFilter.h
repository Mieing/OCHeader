@class NSMutableArray;

@interface WXGSpeedFilter : NSObject {
    NSMutableArray *m_speedCycleArray;
    unsigned long long m_tailPoint;
    unsigned long long m_windowSize;
    float m_currentSpeed;
    unsigned long long m_addSpeedCount;
}

- (id)init;
- (id)initWithWindowSize:(unsigned long long)a0;
- (void)addSpeed:(float)a0;
- (float)getSpeed;
- (void).cxx_destruct;

@end
