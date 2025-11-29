@class AWESceneUndertakeStrategyModel, NSString, NSDictionary, NSArray, AWEUGShowFreqControlsModel, NSMutableArray, AWEUGSceneUndertakeSnackbarViewController;
@protocol AWEUGSceneUndertakeEvadeProtocol;

@interface AWEUGSceneUndertakeStrategy : NSObject <AWEUGSceneStrategyProtocol, AWEUGSceneUndertakeSnackbarViewControllerDelegate>

@property (copy, nonatomic) NSString *sceneType;
@property (copy, nonatomic) NSDictionary *sceneTypeBusinessNameMap;
@property (copy, nonatomic) NSArray *snackbarActionList;
@property (retain, nonatomic) AWEUGShowFreqControlsModel *freqControls;
@property (copy, nonatomic) NSDictionary *config;
@property (retain, nonatomic) AWESceneUndertakeStrategyModel *dataModel;
@property (retain, nonatomic) NSMutableArray *listeners;
@property (nonatomic) BOOL canUndertake;
@property (retain, nonatomic) AWEUGSceneUndertakeSnackbarViewController *snackbarController;
@property (nonatomic) long long undertakeViewType;
@property (retain, nonatomic) id<AWEUGSceneUndertakeEvadeProtocol> evadeStrategy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)injectEvadeStrategy:(id)a0;
- (void)p_registerMessageHandler;
- (void)trackLogWithMessage:(id)a0;
- (void)listener:(id)a0 statusDidChange:(long long)a1;
- (void)registerPitaya;
- (void)notifyViewStatus:(long long)a0;
- (void)handleDataModel;
- (void)dismissUndertakeView;
- (void)showSnackbarViewIfPossible;
- (void)initSnackbarFrequencyControlConfig;
- (BOOL)shouldEvadeForGeneralRule;
- (BOOL)checkFrequncyLimit:(id)a0;
- (void)buildSnackbar;
- (void)sceneUndertakeViewShowFail;
- (void)shouldEvadeForSceneType:(id)a0 completion:(id /* block */)a1;
- (id)initWithSceneType:(id)a0 config:(id)a1;
- (void).cxx_destruct;
- (void)setupListeners;

@end
