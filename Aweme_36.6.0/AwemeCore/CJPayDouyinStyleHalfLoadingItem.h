@class UIView, NSString, CJPayLoadingStyleInfo, UIImageView, CJPayAccountInsuranceTipView, BDImageView, UILabel, CJPayWindow;
@protocol CJPayLoadingManagerProtocol;

@interface CJPayDouyinStyleHalfLoadingItem : CJPayHalfLoadingItem <CJPayAdvanceLoadingProtocol>

@property (retain, nonatomic) UIImageView *contextImageView;
@property (retain, nonatomic) UIView *contextContainerView;
@property (retain, nonatomic) CJPayAccountInsuranceTipView *safeGuardTipView;
@property (retain, nonatomic) CJPayWindow *loadingWindow;
@property (retain, nonatomic) BDImageView *loadPreGifView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) CJPayLoadingStyleInfo *loadingStyleInfo;
@property (nonatomic) BOOL isCompactStyle;
@property (copy, nonatomic) NSString *naviTitleStr;
@property (copy, nonatomic) NSString *belowGifTitleStr;
@property (nonatomic) BOOL isLoadingCenter;
@property (weak, nonatomic) id<CJPayLoadingManagerProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)loadingType;

- (BOOL)cjNeedAnimation;
- (void)startLoadingWithAttributes:(id)a0;
- (void)startLoadingWithValidateTimer:(BOOL)a0;
- (void)p_setupUIForCenter;
- (void)p_updateContextView;
- (double)p_safeLogoMarginTopToNavBar;
- (void)p_push;
- (void)p_preShowTimerTrigger;
- (id)repeatGifUrl;
- (void)p_setupUI;
- (void)dismiss;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)startLoading;
- (void)stopLoading;
- (void)viewDidLoad;
- (id)loadingTitle;

@end
