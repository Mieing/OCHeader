@class JSEvent, NSString;
@protocol WebviewJSEventHandlerBaseDelegate;

@interface WebviewJSEventHandlerBase : MMObject <WebviewJSEventHandler>

@property (nonatomic) BOOL isFromJsCore;
@property (weak, nonatomic) id<WebviewJSEventHandlerBaseDelegate> m_delegate;
@property (retain, nonatomic) JSEvent *currentEvent;
@property (nonatomic) long long vcScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)gameGetAppIdFromdict:(id)a0;
- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)OnWillAnimateRotationToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (id)webviewController;
- (id)wxBaseWebViewController;
- (id)mmWebViewController;
- (void)dealloc;
- (void).cxx_destruct;

@end
