@protocol AWELiteTimerTaskProtocol;

@interface AWELiteTimerTaskWrapper : NSObject

@property (retain, nonatomic) id<AWELiteTimerTaskProtocol> timerTask;
@property long long status;

- (id)__statusStringWithStatus:(long long)a0;
- (void)updateTaskStatus:(long long)a0;
- (void).cxx_destruct;

@end
