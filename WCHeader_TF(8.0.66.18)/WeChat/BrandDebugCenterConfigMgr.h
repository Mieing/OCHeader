@class MemoryMappedKV, NSString;

@interface BrandDebugCenterConfigMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) MemoryMappedKV *mappedKV;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)loadDefaultConfig;
- (BOOL)isDebugVCMainFramePinned:(id)a0;
- (id)getMainFramePinDebugVC;
- (id)getMainFramePinDebugVCTitle;
- (void)setMainFramePinDebugVC:(id)a0 title:(id)a1;
- (void)cancelMainFramePinVC;
- (void)reloadBanner;
- (BOOL)getBoolForConfigType:(unsigned int)a0;
- (void)setBool:(BOOL)a0 forConfigType:(unsigned int)a1;
- (void)setBoolIfUserNotSet:(BOOL)a0 forConfigType:(unsigned int)a1;
- (unsigned int)getUIntForConfigType:(unsigned int)a0;
- (void)setUInt:(unsigned int)a0 forConfigType:(unsigned int)a1;
- (void)setUIntIfUserNotSet:(unsigned int)a0 forConfigType:(unsigned int)a1;
- (void)createTmplAdMsg;
- (id)getTmplAdMsgs;
- (void)createTmplRecommendMsg;
- (id)getTmplRecommendMsgs;
- (void)showInputViewWithTitle:(id)a0 handler:(id /* block */)a1;
- (void).cxx_destruct;

@end
