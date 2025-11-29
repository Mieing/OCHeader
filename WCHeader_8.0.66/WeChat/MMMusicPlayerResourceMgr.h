@class NSString, NSMutableDictionary, MVVideoTransitionResourceConfig;

@interface MMMusicPlayerResourceMgr : MMUserService <MMResourceMgrExt, MMServiceProtocol>

@property (retain, nonatomic) NSString *resMainDir;
@property (retain, nonatomic) NSMutableDictionary *dicVideoResourcePath;
@property (nonatomic) BOOL hasLoadVideoResourcePath;
@property (nonatomic) unsigned int kVideoResrouceCount;
@property (retain, nonatomic) MVVideoTransitionResourceConfig *curConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (id)getVideoResourcePathWithIndex:(unsigned long long)a0;
- (id)translucentIconForAppId:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)translucentIconPathForAppId:(id)a0;
- (id)availableMVTransitionModelArrForPanel;
- (id)getMVTransitionPathById:(id)a0;
- (BOOL)dirIsEmpty:(id)a0;
- (id)nameForSubType:(unsigned long long)a0;
- (id)pathForSubType:(unsigned long long)a0;
- (void)loadVideoResourcePath;
- (void)addVideoResourcePath:(id)a0 withSubType:(unsigned int)a1;
- (void)deleteVideoResourcePathWithSubType:(unsigned int)a0;
- (id)getVideoResourcePathWithSubType:(unsigned int)a0;
- (id)genMVTransitionModelArr;
- (id)genNameWithCurLanguage:(id)a0;
- (BOOL)unzipRes:(unsigned long long)a0 from:(id)a1;
- (void)onResUpdateFinish:(long long)a0 resType:(unsigned int)a1 subResType:(unsigned int)a2;
- (void)onResDeleteFinishWithResType:(unsigned int)a0 subResType:(unsigned int)a1;
- (void).cxx_destruct;

@end
