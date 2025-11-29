@class NSString, RTVVoipEventHandler;
@protocol RxInjector;

@interface RTVXRInteractionNotifyHandler : NSObject <RTVXRInteractionNotifyHandler>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) RTVVoipEventHandler *eventHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (BOOL)handleReceivedMessage:(id)a0;
- (void).cxx_destruct;

@end
