@class UIView, NSString, CJPayStandardBubbleView, CJPayUnifyPayHighContractView, CJPayUnifyPayHomePageHeaderView, UIImageView, CJPayUnifyPayHomePageScrollView, MASConstraint, CJPayStandardButton, CJPayUnifyPayHomePageViewModel, UILabel;

@interface CJPayUnifyPayHomePageView : UIView

@property (retain, nonatomic) CJPayUnifyPayHomePageHeaderView *headerView;
@property (retain, nonatomic) CJPayUnifyPayHighContractView *highContractView;
@property (retain, nonatomic) CJPayStandardButton *confirmButton;
@property (retain, nonatomic) CJPayStandardBubbleView *standardBubbleView;
@property (retain, nonatomic) UIView *bubbleContentView;
@property (retain, nonatomic) UILabel *bubbleContentLabel;
@property (retain, nonatomic) UIView *confirmButtonZone;
@property (retain, nonatomic) UIView *preVerifyContentView;
@property (retain, nonatomic) UIView *highContractContentView;
@property (retain, nonatomic) UIView *guideContentView;
@property (retain, nonatomic) UILabel *securityTipsLabel;
@property (retain, nonatomic) UIImageView *securityIcon;
@property (copy, nonatomic) NSString *tradeName;
@property (retain, nonatomic) MASConstraint *confirmButtonTopSelfConstraint;
@property (retain, nonatomic) MASConstraint *homePageScrollViewTopConstraint;
@property (retain, nonatomic) MASConstraint *securityCenterXConstraint;
@property (nonatomic) BOOL isHasShowBubbleView;
@property (retain, nonatomic) CJPayUnifyPayHomePageViewModel *model;
@property (retain, nonatomic) CJPayUnifyPayHomePageScrollView *homePageScrollView;
@property (nonatomic) BOOL isCurrentCompress;
@property (retain, nonatomic) MASConstraint *scrollViewButtomBaseConfirmBtnConstraint;
@property (retain, nonatomic) MASConstraint *scrollViewButtomBaseVerifyViewConstraint;
@property (retain, nonatomic) UIView *preVerifyView;
@property (retain, nonatomic) UIView *methodDetailView;
@property (retain, nonatomic) UIView *methodListView;
@property (retain, nonatomic) UIView *guideView;
@property (copy, nonatomic) id /* block */ buildSubViewBlock;
@property (copy, nonatomic) id /* block */ confirmActionBlock;
@property (copy, nonatomic) id /* block */ highContractViewTrackBlock;
@property (copy, nonatomic) id /* block */ homePageViewFrameChangeBlock;

- (void)refreshWithModel:(id)a0;
- (void)p_clickConfirmButton;
- (BOOL)p_isGuideViewFixedTop;
- (id)currentContainerBGColor;
- (void)refreshPayMethodOnlyWithShowConfig:(id)a0 confirmButtonText:(id)a1;
- (id)initWithTradeName:(id)a0;
- (void)p_preViewHeightChanged;
- (void)p_reloadCurrentViewWithIsScroll:(BOOL)a0 isKeepCompressStatus:(BOOL)a1;
- (void)p_refreshTipsView;
- (id)currentBGColor;
- (void)p_refreshHighContractView;
- (void)p_refreshConfirmZoneView;
- (void)p_refreshHomePageScrollView;
- (void)p_refreshBubbleView;
- (void)p_refreshHeaderViewWithNeedCompress:(BOOL)a0;
- (void)p_positionScrollView;
- (BOOL)p_isNeedCompress;
- (long long)p_homePageContentViewTopMargin;
- (BOOL)p_isCurrentViewExpand;
- (BOOL)p_isHightContractViewFixedTop;
- (void)p_addHighContractView;
- (BOOL)p_isHitWakeUpTimeOpt;
- (id)loadingShowBasedView;
- (void)refreshCurrentCompressStatus;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
