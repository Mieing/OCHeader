@class NSString;

@interface IlinkAppContextService : MMUserService <MMKernelExt, CNetworkStatusExt, PBMessageObserverDelegate, IMsgExt, MMServiceProtocol> {
    NSString *app_dir_;
    struct AffIlinkKeeperCallback { void /* function */ **x0; id x1; } *aff_ilink_callback;
    BOOL is_ilink_cloud_session_init_;
    struct shared_ptr<ilink::IlinkContext> { struct IlinkContext *__ptr_; struct __shared_weak_count *__cntrl_; } ilink_ctx_;
    struct shared_ptr<ilink::CloudSession> { struct CloudSession *__ptr_; struct __shared_weak_count *__cntrl_; } cloud_session_;
    int ilink_cgi_retry_count_;
}

@property (nonatomic) long long selfUin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iLinkPath;

- (void)sendCloudSessionRequest:(unsigned int)a0 body:(const void *)a1 longPolling:(BOOL)a2 timeout:(unsigned int)a3;
- (void)sendIlinkAuthRequest:(unsigned int)a0 body:(const void *)a1 longPolling:(BOOL)a2 timeout:(unsigned int)a3;
- (void)sendRequest:(id)a0 Retry:(int)a1;
- (void)IlinkInit;
- (struct shared_ptr<void> { void *x0; struct __shared_weak_count *x1; })getCloudSession;
- (void)handleNewXmlMsg:(id)a0;
- (void)onIPXX:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)onAuthOK;
- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)onServiceClearData;
- (void)OnGetNewXmlMsg:(id)a0 Type:(id)a1 MsgWrap:(id)a2;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)ReachabilityChange:(unsigned int)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
