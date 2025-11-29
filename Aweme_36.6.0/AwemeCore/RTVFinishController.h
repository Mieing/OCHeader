@class RTVFinishForwardTask;
@protocol RTVXRBusinessContextProvider, RxInjector, RTVXRRouterInterface, RTVVoipContextManagerInterface;

@interface RTVFinishController : NSObject

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVXRBusinessContextProvider> businessContextProvider;
@property (readonly, nonatomic) id<RTVXRRouterInterface> router;
@property (readonly, nonatomic) id<RTVVoipContextManagerInterface> contextManager;
@property (retain, nonatomic) RTVFinishForwardTask *task;

- (void)rxAwakeFromPropertyInjection;
- (void)updateFinishForwardTask:(id)a0;
- (void)excuteFinishTasksIfNeeded;
- (void)loadFinishTask;
- (void).cxx_destruct;

@end
