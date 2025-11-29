@class NSString, JSEvent, NSURLConnection, NSMutableData;

@interface WebviewJSEventHandler_timelineCheckIn : WebviewJSEventHandlerBase <NSURLConnectionDelegate, WCCommitViewResultDelegate>

@property (retain, nonatomic) NSURLConnection *m_connecttion;
@property (retain, nonatomic) JSEvent *m_curEvent;
@property (retain, nonatomic) NSMutableData *m_recData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)clearCurData;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (void)shareTimelineWithEvent:(id)a0 imageData:(id)a1;
- (void)onCancelForwardForForwardView:(id)a0;
- (void)onDoneForwardForForwardView:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;

@end
