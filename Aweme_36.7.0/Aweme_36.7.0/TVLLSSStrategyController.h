@class NSDictionary;
@protocol TVLLSSStrategyDelegate;

@interface TVLLSSStrategyController : NSObject {
    struct shared_ptr<livecoreplayer::liveplayer::LSSStrategyController> { struct LSSStrategyController *__ptr_; struct __shared_weak_count *__cntrl_; } _LSSStrategyController;
}

@property (weak, nonatomic) id<TVLLSSStrategyDelegate> delegate;
@property (readonly, copy, nonatomic) NSDictionary *statisticsInfo;

- (void)handleRTMSenderInfoReceivedNotification:(id)a0;
- (void)handleStrategyTriggerEvent:(id)a0 eventInfo:(id)a1;
- (void).cxx_destruct;
- (void)stop;
- (id).cxx_construct;
- (void)start;
- (void)dealloc;
- (id)initWithConfiguration:(id)a0 delegate:(id)a1;

@end
