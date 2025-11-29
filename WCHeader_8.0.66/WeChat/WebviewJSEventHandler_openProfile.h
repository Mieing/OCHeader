@class NSString, JSEvent;

@interface WebviewJSEventHandler_openProfile : WebviewJSEventHandlerBase <OpenProfileBlockViewControllerDelegate> {
    JSEvent *_curEvent;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)onOpenProfileEnd:(int)a0;
- (void).cxx_destruct;

@end
