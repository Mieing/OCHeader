@class CJPayBaseVerifyManager, CJPayGuideWithConfirmView, UILabel, CJPayDynamicLayoutView, NSMutableArray, CJPayStandardButton, UIView, NSString, CJPayPreValidationHubModel, CJPayErrorInfoActionView, CJPayNaviBarTextAction, CJPayAssetPayMethodDetailView, CJPayMarketingMsgView;
@protocol CJPayTrackerProtocol;

@interface CJPayHalfPreVerifyHubViewController : CJPayHalfPageBaseViewController

@property (retain, nonatomic) CJPayPreValidationHubModel *model;
@property (retain, nonatomic) CJPayNaviBarTextAction *otherVerifyBarAction;
@property (retain, nonatomic) UILabel *tradeNameLabel;
@property (retain, nonatomic) CJPayMarketingMsgView *marketingMsgView;
@property (retain, nonatomic) CJPayAssetPayMethodDetailView *payMethodDetailView;
@property (retain, nonatomic) CJPayErrorInfoActionView *errorInfoView;
@property (retain, nonatomic) CJPayStandardButton *confirmButton;
@property (retain, nonatomic) UIView *spaceView;
@property (retain, nonatomic) CJPayGuideWithConfirmView *guideView;
@property (retain, nonatomic) CJPayDynamicLayoutView *dynamicContentView;
@property (retain, nonatomic) NSMutableArray *dynamicViewList;
@property (nonatomic) BOOL needUnchangedHeight;
@property (copy, nonatomic) NSString *defaultVerifyType;
@property (nonatomic) BOOL commonRecommendStatus;
@property (weak, nonatomic) CJPayBaseVerifyManager *verifyManager;
@property (weak, nonatomic) id<CJPayTrackerProtocol> trackDelegate;
@property (nonatomic) BOOL shouldShowSecondaryTradeName;

- (BOOL)supportStdNaviBar;
- (void)p_clickConfirmButton;
- (id)p_commonTrackParams;
- (void)p_trackWithEventName:(id)a0 params:(id)a1;
- (void)p_recordSelectionOriginStatusWithConfig:(id)a0;
- (void)p_changeSelectionItemStatusWithChecked:(BOOL)a0;
- (id)p_getStyleParams;
- (BOOL)p_assetSelectionVoucherStatus:(id)a0;
- (void)p_updateMarketingMsgViewWithShowConfig:(id)a0 voucherType:(id)a1 animated:(BOOL)a2;
- (void)p_refreshGuideView;
- (void)p_setDynamicComponentHiddenStatus;
- (id)p_createDynamicLayoutList;
- (void)p_updateDynamicComponentLayout;
- (id)p_buildGuideProtocolModel;
- (void)dynamicViewFrameChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)unchangedHeightWhenUpdate;
- (unsigned long long)placeholderViewIndex;
- (void)p_setupCommonRecommendStatus;
- (void)p_updateContentWithConfig:(id)a0 extParams:(id)a1;
- (id)p_defaultVerifyType;
- (void)p_refreshContentWithNotification:(id)a0;
- (void)p_trackClickEventWithButtonName:(id)a0 click:(id)a1;
- (BOOL)p_shouldShowTradeName;
- (BOOL)p_needShowGuideView;
- (BOOL)p_showErrorInfoView;
- (long long)p_guideViewStyle;
- (void)p_clickGuideViewWithStatus:(BOOL)a0;
- (void)p_updateContentWithDefaultConfig;
- (void)p_setupUI;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;
- (double)containerHeight;
- (void)back;

@end
