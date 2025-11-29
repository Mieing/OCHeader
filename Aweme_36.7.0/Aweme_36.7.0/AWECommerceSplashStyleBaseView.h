@class BDASplashLogoViewHolder, UIView, NSString, UIImageView, UIButton, AWEAdSplashModel, AWECommerceSplashAdditionalTapView, UILabel;
@protocol AWESplashFakeLaunchScreenView, AWECommerceSplashStyleViewDelegate;

@interface AWECommerceSplashStyleBaseView : UIView <BDASplashLogoViewHolderDelegate, AWECommerceSplashStyleViewProtocol>

@property (nonatomic) struct CGPoint { double x; double y; } startPanPoint;
@property (retain, nonatomic) BDASplashLogoViewHolder *logoViewHolder;
@property (retain, nonatomic) UIView *sdkLogoView;
@property (retain, nonatomic) AWEAdSplashModel *splashModel;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) UIButton *skipBtn;
@property (retain, nonatomic) UILabel *preloadText;
@property (retain, nonatomic) UIImageView *logoView;
@property (retain, nonatomic) AWECommerceSplashAdditionalTapView *additionalTapView;
@property (retain, nonatomic) UIView<AWESplashFakeLaunchScreenView> *fakeLaunchScreenView;
@property (retain, nonatomic) UIView *slideSkipView;
@property (weak, nonatomic) id<AWECommerceSplashStyleViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithModel:(id)a0;
- (void)bringDefaultElementsToTop;
- (void)hideSplashLogoAndText;
- (void)onSkipBtnClicked;
- (BOOL)isValidRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addCustomView;
- (void)triggerSplashActionWithTiming:(unsigned long long)a0;
- (BOOL)hasDowngraded;
- (BOOL)isInEggTransition;
- (void)onAddtionTapViewTapped:(id)a0;
- (BOOL)isTappedSkipBtnOnAdditionalView:(id)a0;
- (void)setConversionViewHidden:(BOOL)a0;
- (void)addDefaultPanGesture;
- (void)addDefaultTapGesture;
- (void)removeFakeLaunchScreen;
- (void)handleDefaultPanGesture:(id)a0;
- (void)handleDefaultTapGesture:(id)a0;
- (void)updatePreloadLabelWithModel:(id)a0;
- (void)setupSlideSkipViewIfNeeded;
- (void)addExtraView;
- (void)changeSkipButtonStyleWithModel:(id)a0;
- (BOOL)setupLogoView;
- (void)skipButtonClicked;
- (void)trackAdEventWithLabel:(id)a0 adExtra:(id)a1;
- (void)skipButtonTimerTimeOut;
- (void)hideCacheLabel;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reset;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupUI;
- (void)hideLogo;

@end
