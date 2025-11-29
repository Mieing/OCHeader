@class JSEvent;

@interface WebviewJSEventHandler_openFinderTimeLineView : WebviewJSEventHandlerBase

@property (retain, nonatomic) JSEvent *event;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (unsigned long long)jumpTypeWithTabType:(int)a0;
- (void)returnResult:(id)a0 code:(long long)a1 message:(id)a2;
- (void).cxx_destruct;

@end
