@class CJPayLoadingStyleInfo, CJPayWindow, UIImageView, CJPayAccountInsuranceTipView, UIView, CJPayDouyinBrandLoadingView, NSString;

@interface CJPayDouyinBrandHalfLoadingItem : CJPayHalfLoadingItem

@property (retain, nonatomic) UIImageView *contextImageView;
@property (retain, nonatomic) UIView *contextContainerView;
@property (retain, nonatomic) CJPayAccountInsuranceTipView *safeGuardTipView;
@property (retain, nonatomic) CJPayWindow *loadingWindow;
@property (retain, nonatomic) CJPayDouyinBrandLoadingView *brandLoadingView;
@property (retain, nonatomic) CJPayLoadingStyleInfo *loadingStyleInfo;
@property (nonatomic) BOOL isCompactStyle;
@property (copy, nonatomic) NSString *naviTitleStr;
@property (copy, nonatomic) NSString *belowGifTitleStr;
@property (nonatomic) BOOL isLoadingCenter;

+ (long long)loadingType;

- (BOOL)cjNeedAnimation;
- (void)p_setupLoadingUI;
- (void)startLoadingWithTitle:(id)a0;
- (void)p_startLoading;
- (void)startLoadingWithAttributes:(id)a0;
- (void)startLoadingWithValidateTimer:(BOOL)a0;
- (void)p_setupUIForCenter;
- (void)p_updateContextView;
- (double)p_safeLogoMarginTopToNavBar;
- (void)p_push;
- (void)p_preShowTimerTrigger;
- (void)dismiss;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)startLoading;
- (void)stopLoading;
- (void)viewDidLoad;
- (id)loadingTitle;

@end
