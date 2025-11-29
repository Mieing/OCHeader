@class AWEXiguaRelatedBarModel, AWEAwemeModel;

@interface AWETemplateXiGuaRelatedVideoBarViewModel : AWETemplateBaseViewModel

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEXiguaRelatedBarModel *xiguaRelatedModel;

+ (Class)aAWEDiversionXiguaCommonAdapterClass;
+ (BOOL)shouldActiveWithData:(id)a0 scene:(unsigned long long)a1 context:(id)a2;

- (void)viewController_viewDidAppear;
- (id)gdLabel;
- (void)viewDidTriggerAction:(unsigned long long)a0;
- (void)trackIronManIfNeededWithAppear:(BOOL)a0;
- (BOOL)needCallback:(id)a0;
- (id)aAWEDiversionXiguaCommonAdapter;
- (void)preloadGuideXiguaAlertIfNeeded;
- (void)jumpToRelatedDetail;
- (void)openMpUrl;
- (void)openXiguaAppIsDialogConfirm:(BOOL)a0;
- (void)noticeTappedDirectOpenAppWithDialogDefaultChecked:(BOOL)a0;
- (id)durationAndPercentParams;
- (id)copyCommonReportParams;
- (id)directBarType;
- (BOOL)isMVideo;
- (BOOL)checkedForActionType:(long long)a0 isNativeBar:(BOOL)a1;
- (id)ironManParams;
- (BOOL)shouldShowNewStyleGuideXiguaAlert;
- (BOOL)checkedGuideAlert;
- (BOOL)legacyCheckedGuideAlertForCacheKey:(id)a0;
- (id)checkedStringForActionType:(long long)a0;
- (void)tappedRelatedBarForMVideoDetail;
- (void)showOpenAppPopViewWithDefaultChecked:(BOOL)a0 isCallback:(BOOL)a1;
- (void)showOpenAppAlertWithDefaultChecked:(BOOL)a0 isCallback:(BOOL)a1;
- (void)showOpenAppPopViewForMVideoDetail:(BOOL)a0;
- (void)showOpenAppAlertForMVideoDetail:(BOOL)a0;
- (BOOL)newOpenMpUrlWithUrl:(id)a0;
- (void)viewController_viewWillDisplay;
- (void)didInitialized;
- (BOOL)canShowSubContent;
- (void)preprocessBarModel;
- (BOOL)canCustomTrackForTemplateViewShow;
- (BOOL)canCustomTrackForTemplateViewClick;
- (void)trackXiguaRelatedVideoShow;
- (void)triggerJumpAction;
- (void)trackXiguaRelatedVideoClick;
- (void).cxx_destruct;

@end
