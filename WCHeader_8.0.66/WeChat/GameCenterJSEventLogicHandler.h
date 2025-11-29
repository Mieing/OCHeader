@class NSString, NSMutableSet, GameCenterJsApiFacade;
@protocol GameCenterJSEventLogicHandlerDelegate;

@interface GameCenterJSEventLogicHandler : NSObject <JSEventHandler, WebviewJSEventHandlerBaseDelegate> {
    GameCenterJsApiFacade *_jsapiFacade;
}

@property (retain, nonatomic) NSMutableSet *jsEventSet;
@property (weak, nonatomic) id<GameCenterJSEventLogicHandlerDelegate> callDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)jsapiCallFromJSService:(id)a0 params:(id)a1 callbackId:(id)a2;
- (id)jsEventWithFunction:(id)a0 params:(id)a1 callBackID:(id)a2 eventInvokeContext:(id)a3;
- (void)onEndEvent:(id)a0 withResult:(id)a1;
- (id)GetCurrentWebviewViewController;
- (id)webviewController;
- (void).cxx_destruct;

@end
