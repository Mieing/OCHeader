@interface WCCPUHandler : NSObject {
    float m_tickTok;
    float m_totalCPUCost;
    float m_totalTrackingTime;
    BOOL m_bTracking;
    float m_backgroundTotalCPU;
    float m_backgroundTotalSec;
    BOOL m_background;
    BOOL m_backgroundCPUTooSmall;
}

- (id)init;
- (id)initWithCPULimit:(float)a0;
- (void)willEnterForeground;
- (void)didEnterBackground;
- (BOOL)isBackgroundCPUTooSmall;
- (BOOL)cultivateCpuUsage:(float)a0 periodTime:(float)a1;
- (void)cultivateBackgroundCpu:(float)a0 periodTime:(float)a1;

@end
