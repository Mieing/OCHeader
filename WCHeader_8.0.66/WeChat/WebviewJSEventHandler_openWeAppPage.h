@class NSString, WAContactGetter;

@interface WebviewJSEventHandler_openWeAppPage : WebviewJSEventHandlerBase {
    WAContactGetter *_contactGetter;
}

@property (nonatomic) BOOL useEmbedMode;
@property (copy, nonatomic) NSString *halfScreenStyle;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void).cxx_destruct;

@end
