@class NSString, NSMutableSet, MagicPkgInfoDBMgr, NSObject;
@protocol OS_dispatch_queue;

@interface MagicPkgCheckListener : MMUserService <IExptServiceExt, MMServiceProtocol> {
    NSMutableSet *_preloadPkgId;
    NSMutableSet *_netscene;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned char _configChanged;
}

@property (retain, nonatomic) MagicPkgInfoDBMgr *magicDBMgr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)processMagicBootsCmd:(id)a0;
- (void)processMagicBootsCmdXML:(struct XmlReaderAttr_t { char *x0; char *x1; struct XmlReaderAttr_t *x2; } *)a0;
- (void)checkBootsUpdate;
- (void)checkBootsUpdate:(id)a0;
- (void)repeatCheckBootsUpdate;
- (id)getDBMgr;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)dealloc;
- (void)applicationWillEnterForeground;
- (void)doUpdateMagicPkg;
- (void)doUpdateHighLevelMagicPkg;
- (void)doCleanMagicPkg;
- (void)checkMagicPkg:(id)a0 baseId:(id)a1 isImmediately:(BOOL)a2 isAutoCheck:(BOOL)a3;
- (void)checkHighLevelMagicPkg:(id)a0 baseId:(id)a1 isImmediately:(BOOL)a2 isAutoCheck:(BOOL)a3;
- (void)checkMagicPkgWithBoots:(id)a0 baseId:(id)a1 isImmediately:(BOOL)a2 isAutoCheck:(BOOL)a3 isHighLevel:(BOOL)a4;
- (void)report27831:(id)a0 pkgInfo:(id)a1 fileExist:(long long)a2 scene:(long long)a3 state:(long long)a4 errCode:(long long)a5 isHighLevel:(BOOL)a6;
- (BOOL)checkIsIntervalTime:(id)a0;
- (void)setIntervalTime:(id)a0;
- (BOOL)checkHighLevelPkgIntervalTime:(id)a0;
- (void)updateMagicPkgVersionStorage:(id)a0;
- (id)getMagicPkgVersion;
- (void)onExptItemListChange;
- (void).cxx_destruct;

@end
