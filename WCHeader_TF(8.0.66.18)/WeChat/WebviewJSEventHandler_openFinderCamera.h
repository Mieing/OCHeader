@class JSEvent, WCFinderPostMgr, NSString;

@interface WebviewJSEventHandler_openFinderCamera : WebviewJSEventHandlerBase <WCFinderPostMgrDelegate>

@property (retain, nonatomic) JSEvent *event;
@property (retain, nonatomic) WCFinderPostMgr *postMgr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)returnResult:(id)a0 code:(long long)a1 message:(id)a2;
- (id)postMgrSourceInfo:(id)a0;
- (id)postMgrGetVideoTemplateInfo:(id)a0;
- (void).cxx_destruct;

@end
