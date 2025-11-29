@class NSString, NSMutableArray, RACCompoundDisposable;

@interface RACSubject : RACSignal <RACSubscriber>

@property (readonly, nonatomic) NSMutableArray *subscribers;
@property (readonly, nonatomic) RACCompoundDisposable *disposable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)subject;

- (void)sendNext:(id)a0;
- (void)enumerateSubscribersUsingBlock:(id /* block */)a0;
- (void)sendError:(id)a0;
- (void)sendCompleted;
- (void)didSubscribeWithDisposable:(id)a0;
- (id)subscribe:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
