@class NSDictionary, MMKV, NSString;

@interface AWEUndertakeCommonStrategy : AWEUndertakeBaseStrategy <AWEAlertProtocol, BDXContainerLifecycleProtocol>

@property (retain, nonatomic) MMKV *mmkv;
@property (retain, nonatomic) NSDictionary *referStringSceneMap;
@property (copy, nonatomic) id /* block */ popupCallback;
@property (nonatomic) BOOL undertakeFinished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerDidClose:(id)a0;
- (BOOL)canShow;
- (void)showWithCloseCallback:(id /* block */)a0;
- (id)getCurrentFeedAweModel;
- (id)getCurrScene;
- (void)trackLogWithMessage:(id)a0;
- (void)injectConditions;
- (void)checkAllConditionsWithSkip:(id)a0;
- (id)initStrategyWithModel:(id)a0;
- (BOOL)needUndertakeOnThisLaunch;
- (void)performUndertake;
- (void)performUndertakeWithModel:(id)a0;
- (void)showBottomBanner:(id)a0;
- (id)setNotiImageView;
- (id)configCommonParams:(BOOL)a0;
- (void).cxx_destruct;

@end
