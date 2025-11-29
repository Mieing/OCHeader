@class WASubscriptionMessageLogic, NSString;

@interface WAJSEventHandler_requestSubscribeMessage : WAJSEventHandler_BaseEvent <WASubscriptionMessageLogicDelegate, WASubscriptionMessageLogicDataSource>

@property (retain, nonatomic) WASubscriptionMessageLogic *logic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)onSubscriptionMessageLogic:(id)a0 finishedWithResult:(id)a1 success:(BOOL)a2 cancel:(BOOL)a3 errorMessage:(id)a4 errorCode:(long long)a5;
- (void)onSubscriptionMessageLogicWillShowPageSheet:(id)a0;
- (void)onSubscriptionMessageLogicWillDismissPageSheet:(id)a0;
- (id)viewControllerToShowPageSheet;
- (void).cxx_destruct;

@end
