@class NSMutableDictionary, MMContext;
@protocol MMIlinkCheckResourceMgrDelegate;

@interface MMIlinkCheckResourceMgr : NSObject {
    MMContext *m_context;
    struct shared_ptr<ilink::NetworkManager> { struct NetworkManager *__ptr_; struct __shared_weak_count *__cntrl_; } network_;
}

@property (retain, nonatomic) NSMutableDictionary *checkingResourceDic;
@property (weak, nonatomic) id<MMIlinkCheckResourceMgrDelegate> delegate;

- (id)initWithReceiveCheckResourceIdentify;
- (void)dealloc;
- (void)checkResourceUpdate:(id)a0;
- (void)batchCheckResourceUpdate:(id)a0;
- (void)checkUDRResourceUpdate:(id)a0;
- (void)batchCheckUDRResourceUpdate:(id)a0;
- (void)periodCheckUDRResourceUpdate:(id)a0 offset:(id)a1;
- (void)specifiedCheckUDRResourceUpdate:(id)a0 name:(id)a1 version:(unsigned int)a2 extInfo:(id)a3;
- (void)createRequest:(const char *)a0 size:(unsigned long long)a1 scene:(int)a2 type:(unsigned long long)a3 extInfo:(id)a4 projectIds:(id)a5;
- (void)setAppParameter:(id)a0;
- (void)setProjectParameter:(id)a0 localProjectParams:(id)a1;
- (void)setLocalResource:(id)a0 localResourcesMap:(id)a1;
- (id)getResourceList:(id)a0;
- (void)callDelegateOnBatchCheckResource:(id)a0 resourcesDic:(id)a1 blockTimeDic:(id)a2 noUpdateProjectIds:(id)a3 errorProjectIds:(id)a4 errorType:(unsigned long long)a5 errorCode:(int)a6 timeStamp:(unsigned int)a7;
- (void)callDelegateOnPeriodCheckResource:(id)a0 resourcesDic:(id)a1 noUpdateProjectIds:(id)a2 errorProjectIds:(id)a3 errorType:(unsigned long long)a4 errorCode:(int)a5 timeStamp:(unsigned int)a6 nextUpdateInterval:(int)a7 isFinish:(int)a8 newOffset:(id)a9;
- (void)onCheckResourceComplete:(unsigned int)a0 resp:(const void *)a1 errorCode:(int)a2;
- (void)onReceiveAppMessageEvent:(const void *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
