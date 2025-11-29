@class JSEvent, NSString;

@interface WebviewJSEventHandler_openFinderPostView : WebviewJSEventHandlerBase <WCFinderPostViewControllerDelegate>

@property (retain, nonatomic) JSEvent *event;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)returnResult:(id)a0 code:(long long)a1 message:(id)a2;
- (void)postViewControllerStartUpload;
- (void)postViewControllerCancelPostWithModel:(id)a0;
- (void).cxx_destruct;

@end
