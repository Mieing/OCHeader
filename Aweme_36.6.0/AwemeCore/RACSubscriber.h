@class NSString, RACCompoundDisposable;

@interface RACSubscriber : NSObject <RACSubscriber>

@property (copy, nonatomic) id /* block */ next;
@property (copy, nonatomic) id /* block */ error;
@property (copy, nonatomic) id /* block */ completed;
@property (readonly, nonatomic) RACCompoundDisposable *disposable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)subscriberWithNext:(id /* block */)a0 error:(id /* block */)a1 completed:(id /* block */)a2;

- (void)sendNext:(id)a0;
- (void)sendError:(id)a0;
- (void)sendCompleted;
- (void)didSubscribeWithDisposable:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
