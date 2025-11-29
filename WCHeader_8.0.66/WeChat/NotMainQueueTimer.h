@class NSObject;
@protocol OS_dispatch_source, NotMainQueueTimerDelegate;

@interface NotMainQueueTimer : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_source> *m_timerSource;
@property (weak, nonatomic) id<NotMainQueueTimerDelegate> m_delegate;

- (id)initWithDelegate:(id)a0 interval:(float)a1 delay:(float)a2;
- (void)stop;
- (void).cxx_destruct;

@end
