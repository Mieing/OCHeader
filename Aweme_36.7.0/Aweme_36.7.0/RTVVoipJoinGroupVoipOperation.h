@class RTVJoinGroupVoipAction;
@protocol RxInjector, RTVUserProfileManagerInterface;

@interface RTVVoipJoinGroupVoipOperation : RTVStateActionBaseOperation

@property (readonly, nonatomic) RTVJoinGroupVoipAction *action;
@property (readonly, copy, nonatomic) id /* block */ completion;
@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;

- (void)rxAwakeFromPropertyInjection;
- (id)initWithInvokeAction:(id)a0 completionBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (void)finishWithError:(id)a0;
- (void)main;

@end
