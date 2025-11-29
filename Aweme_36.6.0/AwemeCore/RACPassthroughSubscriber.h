@class RACSignal, NSString, RACCompoundDisposable;
@protocol RACSubscriber;

@interface RACPassthroughSubscriber : NSObject <RACSubscriber>

@property (readonly, nonatomic) id<RACSubscriber> innerSubscriber;
@property (readonly, nonatomic) RACSignal *signal;
@property (readonly, nonatomic) RACCompoundDisposable *disposable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSubscriber:(id)a0 signal:(id)a1 disposable:(id)a2;
- (void)sendNext:(id)a0;
- (void)sendError:(id)a0;
- (void)sendCompleted;
- (void)didSubscribeWithDisposable:(id)a0;
- (void).cxx_destruct;

@end
