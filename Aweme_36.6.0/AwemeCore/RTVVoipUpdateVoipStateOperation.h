@protocol RxInjector, RTVVoipModelStoreInterface;

@interface RTVVoipUpdateVoipStateOperation : RTVStateActionBaseOperation

@property (readonly, nonatomic) long long voipStatus;
@property (readonly, nonatomic) long long sessionStatus;
@property (readonly, nonatomic) BOOL needPatch;
@property (readonly, copy, nonatomic) id /* block */ completion;
@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVVoipModelStoreInterface> voipStore;

- (void)rxAwakeFromPropertyInjection;
- (id)initWithStatusCode:(long long)a0 sessionStatus:(long long)a1 needPatch:(BOOL)a2 completionBlock:(id /* block */)a3;
- (void)__callCompletionWithSuccess:(BOOL)a0 error:(id)a1;
- (void).cxx_destruct;
- (void)main;

@end
