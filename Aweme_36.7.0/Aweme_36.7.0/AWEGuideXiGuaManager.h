@class AWEAwemeModel, NSString, SKStoreProductViewController, NSMutableArray, AWEGuideVideoPopView, AWEGuideXiguaPopViewTrackHandler, DUXCheckBox, DUXAlertDialog;

@interface AWEGuideXiGuaManager : NSObject <SKStoreProductViewControllerDelegate, AWEGuideXiGuaManagerProtocol>

@property (retain, nonatomic) NSMutableArray *preloadSKStroeVeiewaContainer;
@property (retain, nonatomic) SKStoreProductViewController *preloadViewController;
@property (retain, nonatomic) DUXCheckBox *box;
@property (retain, nonatomic) DUXAlertDialog *dialog;
@property (retain, nonatomic) AWEGuideVideoPopView *popView;
@property (retain, nonatomic) AWEGuideXiguaPopViewTrackHandler *popViewTracker;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) long long guideType;
@property (nonatomic) double playAtTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareManager;
+ (Class)aAWEFeedModuleServiceCommonAdaperClass;
+ (void)clearFeedBarGuideXiguaAlertAllCache;
+ (Class)aAWEDiversionXiguaCommonAdapterClass;

- (BOOL)isLongVideo;
- (id)aAWEFeedModuleServiceCommonAdaper;
- (BOOL)checkedFeedBarGuideXiguaAlertForActionType:(long long)a0;
- (id)downloadZlinkForType:(long long)a0;
- (id)openZlinkForType:(long long)a0;
- (BOOL)shouldShowNewStyleGuideXiguaAlertWithModel:(id)a0 type:(long long)a1;
- (void)showGuideXiguaAlertWithModel:(id)a0 type:(long long)a1 targetParam:(id)a2 defaultAction:(id /* block */)a3;
- (void)showGuideXiguaAlertWithModel:(id)a0 type:(long long)a1 targetParam:(id)a2 defaultAction:(id /* block */)a3 openXiguaAppAction:(id /* block */)a4;
- (BOOL)isXiguaAppExist;
- (void)openXiguaAPPForType:(long long)a0;
- (void)setupDialogUIForResolution;
- (void)configDialogActionsWithType:(long long)a0 defaultAction:(id /* block */)a1;
- (void)openXiguaAPPForType:(long long)a0 targetParams:(id)a1;
- (void)trackClickPopupPosition:(id)a0;
- (void)downloadXiguaAPP:(id)a0 targetParams:(id)a1 completion:(id /* block */)a2;
- (void)openXiguaMicroAPP;
- (BOOL)needCallback:(id)a0;
- (void)showGuideXiGuaPopViewForFeedBottomBarDefaultAction:(id /* block */)a0 isCallback:(BOOL)a1;
- (void)setupDialogUI;
- (void)configDialogActionsForBottomBarWith:(id /* block */)a0 isCallback:(BOOL)a1;
- (void)setupDialogUIForChangeEpisode;
- (void)configDialogActionsForChangeEpisodeWith:(id /* block */)a0 targetParams:(id)a1 type:(long long)a2 openXiguaAction:(id /* block */)a3;
- (void)showGuideXiguaAlertWithModel:(id)a0 type:(long long)a1 targetParam:(id)a2 defaultAction:(id /* block */)a3 openXiguaAppAction:(id /* block */)a4 closeAlertAction:(id /* block */)a5;
- (void)showGuideXiguaAlertForLVideoResolutionWithModel:(id)a0 targetParam:(id)a1 defaultAction:(id /* block */)a2 openXiguaAppAction:(id /* block */)a3;
- (void)showGuideXiguaAlertForLVideoPlayDoneWithModel:(id)a0 targetParam:(id)a1 defaultAction:(id /* block */)a2 openXiguaAppAction:(id /* block */)a3;
- (void)showGuideXiguaAlertForLVideoRelatedVideoWithModel:(id)a0 targetParam:(id)a1 defaultAction:(id /* block */)a2 openXiguaAppAction:(id /* block */)a3;
- (void)showGuideXiguaAlertForLVideoRelatedChangeEpisodeWithModel:(id)a0 targetParam:(id)a1 defaultAction:(id /* block */)a2 openXiguaAppAction:(id /* block */)a3;
- (void)showGuideXiguaAlertForLVideoFeedBottomBarWithModel:(id)a0 targetParam:(id)a1 defaultAction:(id /* block */)a2 openXiguaAppAction:(id /* block */)a3;
- (void)showGuideXiguaAlertForMVideoRelatedVideoWithModel:(id)a0 targetParam:(id)a1 defaultAction:(id /* block */)a2 openXiguaAppAction:(id /* block */)a3 closeAlertAction:(id /* block */)a4;
- (void)guideXiguaEncoreAlertDidShow;
- (void)guideXiguaAlertDidShow;
- (void)saveFeedBarGuideXiguaAlertActionType:(long long)a0 checked:(BOOL)a1;
- (void)labelDidClicked;
- (void)downloadXiguaAPP:(id)a0 completion:(id /* block */)a1;
- (id)aAWEDiversionXiguaCommonAdapter;
- (void)openXiguaAPPWithParams:(id)a0 externalParams:(id)a1;
- (BOOL)checkedFeedBarGuideXiguaAlert;
- (long long)guideXiguaAlertActionType;
- (void)openSKStoreWithCompletion:(id /* block */)a0;
- (void)traceOpenAppStore:(id)a0 targetParams:(id)a1;
- (id)xiGuaScheme;
- (void)routeToXiguaWithSchemaURL:(id)a0;
- (void)traceOpenXigua:(id)a0 params:(id)a1;
- (void)preloadSKStoreView;
- (void)preloadGuideXiguaAlertIfNeededWithModel:(id)a0 type:(long long)a1;
- (void)preloadGuideXiguaAlertIfNeededWithJumpModel:(id)a0;
- (void)showGuideXiguaAlertWithModel:(id)a0 type:(long long)a1;
- (void)openXiguaAppWithModel:(id)a0 targetParams:(id)a1 completion:(id /* block */)a2;
- (void)showGuideXiguaPopViewWithXiguaRelatedBarModel:(id)a0 awemeModel:(id)a1 targetParam:(id)a2 defaultAction:(id /* block */)a3 openXiguaAppAction:(id /* block */)a4;
- (id)appName;
- (void).cxx_destruct;
- (void)productViewControllerDidFinish:(id)a0;

@end
