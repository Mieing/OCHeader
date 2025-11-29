@class NSString, NSDictionary, NSMutableData, NSURLConnection;

@interface LiteAppJsApiShareToTimeline : LiteAppJsApi <NSURLConnectionDelegate, WCCommitViewResultDelegate>

@property (retain, nonatomic) NSURLConnection *m_connection;
@property (retain, nonatomic) NSMutableData *m_recData;
@property (retain, nonatomic) NSDictionary *m_extraData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)invokeJsApi:(id)a0 param:(id)a1 isFromView:(BOOL)a2;
- (void)clearCurData;
- (void)showCanNotShareEmptyPage;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (void)onCancelForwardForForwardView:(id)a0;
- (void)onDoneForwardForForwardView:(id)a0;
- (void)shardTimeline:(id)a0 imageData:(id)a1;
- (void)dealloc;
- (void).cxx_destruct;

@end
