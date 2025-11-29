@class WebviewJSEventHandlerBase, NSString, NSDictionary, JSEvent, NSURLConnection, NSMutableData;

@interface ShareTimelineBaseImpl : MMObject <NSURLConnectionDelegate, WCCommitViewResultDelegate>

@property (weak, nonatomic) WebviewJSEventHandlerBase *eventHandler;
@property (copy, nonatomic) NSString *variantEventName;
@property (copy, nonatomic) id /* block */ beforeUploadBlock;
@property (retain, nonatomic) NSURLConnection *m_connecttion;
@property (retain, nonatomic) JSEvent *m_curEvent;
@property (retain, nonatomic) NSMutableData *m_recData;
@property (retain, nonatomic) NSString *publishedId;
@property (retain, nonatomic) NSDictionary *extraData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)webviewController;
- (id)mmWebViewController;
- (id)wxBaseWebViewController;
- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)showCanNotShareEmptyPage;
- (void)clearCurData;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (void)shareTimelineWithEvent:(id)a0 imageData:(id)a1;
- (void)onCancelForwardForForwardView:(id)a0;
- (void)onDoneForwardForForwardView:(id)a0;
- (void)forwardViewController:(id)a0 didFinishForwardingWithDataItem:(id)a1;
- (void)forwardViewControllerDidCancel:(id)a0;
- (void)dealloc;
- (void)reportAdLandingPageShareIfNeeded;
- (void).cxx_destruct;

@end
