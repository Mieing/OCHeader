@class AWESnackbarUIConfigModel, NSString, NSDictionary, NSArray, AWEUGShowFreqControlsModel, AWEUGSnackbarViewController;
@protocol AWEUGSceneUndertakeEvadeProtocol;

@interface AWEUGSnackbarStrategy : NSObject <AWEUGSnackbarViewControllerDelegate>

@property (copy, nonatomic) NSString *sceneType;
@property (retain, nonatomic) id<AWEUGSceneUndertakeEvadeProtocol> evadeStrategy;
@property (copy, nonatomic) NSDictionary *config;
@property (copy, nonatomic) NSDictionary *sceneTypeBusinessNameMap;
@property (copy, nonatomic) NSArray *snackbarActionList;
@property (retain, nonatomic) AWEUGShowFreqControlsModel *freqControls;
@property (retain, nonatomic) AWEUGSnackbarViewController *snackbarController;
@property (retain, nonatomic) AWESnackbarUIConfigModel *snackbarConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)formatActionScheme:(id)a0;
- (void)p_registerMessageHandler;
- (void)trackLogWithMessage:(id)a0;
- (void)registerPitaya;
- (void)notifyViewStatus:(long long)a0;
- (void)showSnackbarViewIfPossible;
- (BOOL)shouldEvadeForGeneralRule;
- (BOOL)checkFrequncyLimit:(id)a0;
- (void)buildSnackbar;
- (void)sceneUndertakeViewShowFail;
- (void)shouldEvadeForSceneType:(id)a0 completion:(id /* block */)a1;
- (void)handleConfigModel;
- (void)initFrequencyConfig;
- (id)initWithSceneType:(id)a0 config:(id)a1 evadeStrategy:(id)a2;
- (void).cxx_destruct;

@end
