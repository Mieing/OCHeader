@class MMResourceDownloadMgr, NSArray, NSString, MMResInfoMgr;

@interface MMResourceService : MMRootService <MMResInfoMgr, PBMessageObserverDelegate, MMResDownloadMgrDelegate, IMsgExt, CNetworkStatusExt, MMServiceProtocol> {
    NSString *KEY_UPDATE_RES_KEY;
    NSString *ACCESS_RES_GROUP;
    unsigned int _lastRstCheckResCgiFailTime;
    unsigned int _lastDownloadFailTime;
}

@property (retain, nonatomic) NSArray *packageResourceTypeArray;
@property (retain, nonatomic) MMResInfoMgr *resInfoMgr;
@property (retain, nonatomic) MMResourceDownloadMgr *resDownloadMgr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)decompressData:(id)a0 completionHandler:(id /* block */)a1;

- (void)unusedSourceCheck;
- (id)init;
- (BOOL)isRequestInNonAuth;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceEnterForeground;
- (void)reOpenDB;
- (id)getAESKeyInKeyChain:(unsigned int)a0 WithSubtype:(unsigned int)a1 WithKeyVersion:(unsigned int)a2 WithEID:(unsigned int)a3;
- (void)saveAESKeyInKeyChain:(id)a0 WithResType:(unsigned int)a1 WithSubtype:(unsigned int)a2 WithKeyVersion:(unsigned int)a3 WithEID:(unsigned int)a4;
- (void)deleteAESKeyInKeyChain:(unsigned int)a0 WithSubtype:(unsigned int)a1 WithKeyVersion:(unsigned int)a2 WithEID:(unsigned int)a3;
- (void)checkAndReloadDownloadTask;
- (void)configDelayCheck;
- (void)dealloc;
- (void)clearABTestData:(unsigned int)a0 WithSubRestype:(unsigned int)a1;
- (id)getResPath:(unsigned int)a0 WithSubRestype:(unsigned int)a1;
- (id)getResPath:(unsigned int)a0 WithSubRestype:(unsigned int)a1 getVersion:(unsigned int *)a2;
- (id)getResPath:(unsigned int)a0 WithSubRestype:(unsigned int)a1 getVersion:(unsigned int *)a2 verifyChecksum:(BOOL)a3;
- (id)getResData:(unsigned int)a0 WithSubRestype:(unsigned int)a1 ErrorCode:(long long *)a2;
- (void)didConsumeResource:(unsigned int)a0 subtype:(unsigned int)a1;
- (void)removeResource:(unsigned int)a0 subtype:(unsigned int)a1;
- (BOOL)getCheckResUpdateRequest:(id)a0 scene:(int)a1 context:(id)a2;
- (id)pbCGIWrapForEncryptCheckResUpdataWithArrResID:(id)a0 scene:(unsigned int)a1 context:(id)a2;
- (void)delayCheckResUpdate:(id)a0;
- (BOOL)checkAllResUpdate:(id)a0;
- (void)checkAllTestResUpdate:(id)a0;
- (void)checkResUpdate:(unsigned int)a0;
- (void)checkMultiResUpdate:(id)a0;
- (void)forceUpdateRes:(unsigned int)a0 WithSubtype:(unsigned int)a1;
- (void)forceUpdateRes:(unsigned int)a0 WithSubtype:(unsigned int)a1 ForceWithoutLogin:(BOOL)a2;
- (void)reloadDownloadTask;
- (id)convertResTypeLogStringFromReqList:(id)a0;
- (void)clearExpiredResource:(unsigned int)a0;
- (unsigned int)curNetType;
- (void)parseNewXml:(id)a0;
- (void)processResCacheRequest:(id)a0 Scene:(int)a1;
- (void)createDownloadTask:(id)a0;
- (BOOL)isNeedToDownloadNonWebRes:(id)a0;
- (void)processResDecryptRequest:(id)a0 Scene:(int)a1;
- (void)processResDeleteRequest:(id)a0 Scene:(int)a1;
- (const char *)readChildText:(const char *)a0 inNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a1;
- (id)parseDeleteNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (id)parseDecryptNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (id)parseCacheNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (BOOL)hasRegistedResourceType:(unsigned int)a0;
- (void)ReachabilityChange:(unsigned int)a0;
- (void)OnGetNewXmlMsg:(id)a0 Type:(id)a1 MsgWrap:(id)a2;
- (void)OnResUpdateFinishOnMainThread:(long long)a0 resType:(unsigned int)a1 subResType:(unsigned int)a2;
- (void)handleDownloadTask:(id)a0 downloadData:(id)a1;
- (void)onDownloadTaskStart:(id)a0;
- (void)onDownloadTaskEnd:(long long)a0 downloadData:(id)a1 task:(id)a2;
- (BOOL)insertNewResInfo:(id)a0;
- (id)getResInfo:(unsigned int)a0;
- (id)getResInfo:(unsigned int)a0 WithSubRestype:(unsigned int)a1;
- (id)getOriginalMd5:(unsigned int)a0 WithSubRestype:(unsigned int)a1;
- (BOOL)isForceUpdateMessageReturn:(id)a0;
- (void)ForceUpdateErrorHandler:(id)a0;
- (void)ForceUpdateErrorHandler:(id)a0 ErrorType:(long long)a1;
- (void)handleCgiReport:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)markRstCheckCgiFail;
- (void)markDownloadResourceFail;
- (unsigned int)getFailRetryInterval;
- (void)checkToRetryFailTask;
- (void).cxx_destruct;

@end
