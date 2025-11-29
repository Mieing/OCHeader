@class NSString, AWESearchAIGCSSERequestManager;
@protocol AWESearchAIGCSSEDataControllerDelegate;

@interface AWESearchAIGCSSEDataController : AWESearchAIGCDataController <AWESearchAIGCSSERequestManagerDelegate>

@property (retain, nonatomic) AWESearchAIGCSSERequestManager *requestManager;
@property (weak, nonatomic) id<AWESearchAIGCSSEDataControllerDelegate> requestDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifierForPreRequestWithRootTag:(id)a0;
+ (unsigned long long)newPreRequestType:(id)a0;
+ (BOOL)enableNewPreRequestWithInitialParams:(id)a0;

- (void)didReceiveAllData;
- (void)clearBeforeNewLink;
- (void)didReceiveCommonResponse:(id)a0;
- (id)currentRequestURL;
- (long long)triggerCallback;
- (BOOL)enableNewPreRequestWithInitialParams:(id)a0 context:(id)a1;
- (unsigned long long)newPreRequestType:(id)a0 context:(id)a1;
- (id)refreshNewPreRequestParams:(id)a0 context:(id)a1;
- (void)didReceiveFirstDataChunk;
- (void)retryRequestWithRetryCount:(long long)a0;
- (id)currentSearchId;
- (BOOL)cachalot_refreshWithCompletion:(id /* block */)a0;
- (void)didReceiveHeader:(id)a0;
- (void)didEndReadChunkForError:(id)a0 errorReason:(long long)a1 currentResponse:(id)a2;
- (void)reviveDataSource;
- (void)setupDataSourceKeepAlive;
- (id)getKeepAliveCallback:(id)a0;
- (id)currentRequestRefreshParams;
- (BOOL)isKeepAlive:(id)a0;
- (void)setupRequestCallbackMode:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (BOOL)keepAliveEnabled;

@end
