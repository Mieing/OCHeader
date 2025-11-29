@class RTVReceiveVoipAction;
@protocol RxInjector;

@interface RTVVoipReceiveVoipOperation : RTVStateActionBaseOperation

@property (readonly, nonatomic) RTVReceiveVoipAction *action;
@property (readonly, copy, nonatomic) id /* block */ completion;
@property (readonly, weak, nonatomic) id<RxInjector> injector;

- (id)initWithInvokeAction:(id)a0 completionBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (void)finishWithError:(id)a0;
- (void)main;

@end
