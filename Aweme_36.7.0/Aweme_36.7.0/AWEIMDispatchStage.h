@class NSObject;
@protocol OS_dispatch_queue;

@interface AWEIMDispatchStage : AWEIMStage

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL sync;

- (id)initWithQueue:(id)a0 sync:(BOOL)a1;
- (void).cxx_destruct;
- (void)start;

@end
