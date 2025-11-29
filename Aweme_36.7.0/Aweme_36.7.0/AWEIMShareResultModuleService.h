@class NSString;

@interface AWEIMShareResultModuleService : HTSService <AWEIMShareResultProtocol, HTSService>

@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ shareListCompletion;
@property (copy, nonatomic) id /* block */ selectingCompletion;
@property (copy, nonatomic) id /* block */ willDisappearHandler;
@property (copy, nonatomic) id /* block */ didDisappearHandler;
@property (nonatomic) unsigned long long shareCompletionCallBackStrategy;
@property (copy, nonatomic) id /* block */ shareCompletionCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedIntance;

- (void)registerShareResultWithCompletion:(id /* block */)a0;
- (void)triggerShareResult:(unsigned long long)a0 error:(id)a1;
- (void)registerShareResultWithShareListCompletion:(id /* block */)a0;
- (void)triggerShareResult:(unsigned long long)a0 selectList:(id)a1 error:(id)a2;
- (void)registerShareResultCallbackStrategyWithContext:(id)a0;
- (void)triggerWithCallbackStrategy:(unsigned long long)a0 resultInfo:(id)a1 error:(id)a2;
- (void)registerSelectingListWithCompletion:(id /* block */)a0;
- (void)triggerSelectingList:(id)a0 text:(id)a1 isCancelled:(BOOL)a2 createGroup:(BOOL)a3 error:(id)a4;
- (void)registerWillDisappearHandler:(id /* block */)a0;
- (void)triggerWillDisappearHandler;
- (void)registerDidDisappearHandler:(id /* block */)a0;
- (void)triggerDidDisappearHandler;
- (void).cxx_destruct;

@end
