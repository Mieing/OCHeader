@class RTVInvokeCallingAction;
@protocol RTVUserProfileManagerInterface, RxInjector;

@interface RTVVoipInvokeVoipOperation : RTVStateActionBaseOperation

@property (readonly, nonatomic) RTVInvokeCallingAction *invokeAction;
@property (readonly, copy, nonatomic) id /* block */ completion;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly, weak, nonatomic) id<RxInjector> injector;

- (void)rxAwakeFromPropertyInjection;
- (id)initWithInvokeAction:(id)a0 completionBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (void)finishWithError:(id)a0;
- (void)main;

@end
