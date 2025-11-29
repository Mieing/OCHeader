@class NSData, ShareTimelineBaseImpl;

@interface WebviewJSEventHandler_shareTimelinePrivate : WebviewJSEventHandlerBase

@property (retain, nonatomic) ShareTimelineBaseImpl *shareTimelineImpl;
@property (retain, nonatomic) NSData *coverImageData;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)setupUploadTask:(id)a0 forEvent:(id)a1;
- (void).cxx_destruct;

@end
