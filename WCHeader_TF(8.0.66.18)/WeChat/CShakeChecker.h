@class NSOperationQueue, CMMotionManager, HighpassFilter;
@protocol ShakeCheckerDelegate;

@interface CShakeChecker : MMObject {
    id<ShakeCheckerDelegate> m_delegate;
    CMMotionManager *m_motionMgr;
    HighpassFilter *m_filter;
    NSOperationQueue *m_queue;
}

- (void)setM_Delegate:(id)a0;
- (id)init;
- (void)startCheck;
- (void)stopCheck;
- (void)dealloc;
- (void).cxx_destruct;

@end
