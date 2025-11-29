@class RACSignal, NSString;
@protocol RACSubscriber;

@interface RACChannelTerminal : RACSignal <RACSubscriber>

@property (readonly, nonatomic) RACSignal *values;
@property (readonly, nonatomic) id<RACSubscriber> otherTerminal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithValues:(id)a0 otherTerminal:(id)a1;
- (void)sendNext:(id)a0;
- (void)sendError:(id)a0;
- (void)sendCompleted;
- (void)didSubscribeWithDisposable:(id)a0;
- (id)subscribe:(id)a0;
- (void).cxx_destruct;

@end
