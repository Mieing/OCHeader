@class UIStackView, UIView, NSString, AWEGuideVideoPopViewThemeModel, CALayer, UIImageView, DUXLoadingCircleView, UIButton, DUXCheckBox, CAShapeLayer, AWERelatedVideoJumpConfirmParamModel, UILabel;
@protocol AWEGuideVideoPopViewTrackHandlerProtocol;

@interface AWEGuideVideoPopView : UIView <AWEGuideVideoPopViewProtocol>

@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UIImageView *foreImageView;
@property (retain, nonatomic) UIView *foreImageShadowView;
@property (retain, nonatomic) DUXLoadingCircleView *loadingView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIButton *leftBtn;
@property (retain, nonatomic) UIButton *rightBtn;
@property (retain, nonatomic) UIStackView *btnStackView;
@property (retain, nonatomic) UIView *radioView;
@property (retain, nonatomic) DUXCheckBox *checkBox;
@property (retain, nonatomic) UILabel *radioboxLabel;
@property (retain, nonatomic) UIView *popMaskView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (retain, nonatomic) CALayer *shadowLayer;
@property (retain, nonatomic) UIButton *closeBtn;
@property (retain, nonatomic) AWERelatedVideoJumpConfirmParamModel *paraModel;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *fromModuleName;
@property (retain, nonatomic) AWEGuideVideoPopViewThemeModel *themeModel;
@property (copy, nonatomic) id /* block */ popViewDidCloseBlock;
@property (copy, nonatomic) id /* block */ selectChangedBlock;
@property (nonatomic) BOOL boxSelected;
@property (copy, nonatomic) id /* block */ clickConfirmBlock;
@property (copy, nonatomic) id /* block */ clickCancelBlock;
@property (copy, nonatomic) id /* block */ clickStayBlock;
@property (weak, nonatomic) id<AWEGuideVideoPopViewTrackHandlerProtocol> trackHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)preloadWithJumpConfirmParamModel:(id)a0;

- (void)removeLoadingView;
- (void)setSelectDescription:(id)a0;
- (void)contentViewPanAction:(id)a0;
- (void)showInView:(id)a0 duration:(double)a1;
- (double)resizeScreenWidthScale:(double)a0;
- (void)showWithJumpConfirmParamModel:(id)a0 themeModel:(id)a1 isLongVideo:(BOOL)a2;
- (void)updateUIWithThemeModel:(id)a0;
- (void)setMainBtnTitle:(id)a0;
- (void)setSecondBtnTitle:(id)a0;
- (void)downloadImageForLVideo:(id)a0;
- (void)downloadImageForMVideo:(id)a0;
- (void)trackForShowWindow;
- (void)resizeForAdjustFont;
- (double)getActualFontSizeForLabel:(id)a0;
- (void)addForeImageViewShadow;
- (id)p_lightColorNamed:(id)a0;
- (void)hideWithDuration:(double)a0 closeType:(long long)a1;
- (void)trackForCancelClick;
- (void)trackForOpenClick;
- (void)trackForCloseWindowWithType:(long long)a0;
- (void)p_setUIShowingState;
- (double)fontSizeForLargeModel:(double)a0;
- (void)respondsToCancelButton:(id)a0;
- (void)respondsToConfirmButton:(id)a0;
- (void)popMaskViewTapAction:(id)a0;
- (void)respondsToCloseButton:(id)a0;
- (void)respondsToRadioboxViewClicked:(id)a0;
- (void)respondsToRadioboxClicked:(id)a0;
- (void)showWithPopViewStyle:(long long)a0 jumpConfirmParamModel:(id)a1 themeModel:(id)a2;
- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (void)setSubTitle:(id)a0;
- (void)addLoadingView;

@end
