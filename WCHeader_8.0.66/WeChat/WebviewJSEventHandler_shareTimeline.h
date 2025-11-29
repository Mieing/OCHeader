@class ShareTimelineBaseImpl;

@interface WebviewJSEventHandler_shareTimeline : WebviewJSEventHandlerBase

@property (retain, nonatomic) ShareTimelineBaseImpl *shareTimelineImpl;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void).cxx_destruct;

@end
