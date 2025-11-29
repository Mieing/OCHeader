@class CAGradientLayer, UIImageView, DUXButton, UILabel, UIView, UIButton;
@protocol _TtP9AWELottie13AWELottieView_;

@interface AWEVoiceSearchPanelView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *resultLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UILabel *cancelSubTitleLabel;
@property (retain, nonatomic) UIImageView *rightArrowView;
@property (retain, nonatomic) UIButton *retryButton;
@property (retain, nonatomic) UIView *lottieView;
@property (retain, nonatomic) UIView<_TtP9AWELottie13AWELottieView_> *cancelLottieView;
@property (retain, nonatomic) DUXButton *closeButton;
@property (nonatomic) unsigned long long status;
@property (nonatomic) unsigned long long panelStyle;
@property (nonatomic) BOOL cancelLottiePlaying;
@property (retain, nonatomic) UIView *halfPanelView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) CAGradientLayer *halfBackGradientLayer;
@property (nonatomic) long long themeStyle;
@property (nonatomic) BOOL isBottomDStyle;
@property (retain, nonatomic) UIView *bottomHalfPanelSheet;
@property (retain, nonatomic) UIButton *backview;
@property (copy, nonatomic) id /* block */ retryButtonClickBlock;
@property (copy, nonatomic) id /* block */ closeButtonClickBlock;
@property (copy, nonatomic) id /* block */ resultTextOverOneLineBlock;
@property (copy, nonatomic) id /* block */ halfPanelViewTapBlock;
@property (copy, nonatomic) id /* block */ halfBackViewTapBlock;
@property (copy, nonatomic) id /* block */ retryButtonPressBlock;

- (void)closeButtonClick;
- (unsigned long long)getCurrentStatus;
- (void)retryButtonClicked;
- (void)updatePanelLayout;
- (void)backViewDidClick;
- (void)updateCurrentTheme:(long long)a0;
- (double)currentVerticalScale;
- (void)setRightArrowUserInteraction:(BOOL)a0 hidden:(BOOL)a1;
- (void)setRetryButtonUserInteraction:(BOOL)a0;
- (void)updateTitleWithText:(id)a0;
- (void)updateSubtitleWithText:(id)a0 userInteraction:(BOOL)a1;
- (void)animationStopWithPressCancel;
- (void)updateResultWithAttributedText:(id)a0;
- (void)animationPlayWithStatusType:(unsigned long long)a0 complete:(id /* block */)a1;
- (void)setSubTitleLabelHidden:(BOOL)a0;
- (void)setResultLabelHidden:(BOOL)a0;
- (void)animationPlayWithPressCancel;
- (id)initWithPanelStyle:(unsigned long long)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 isBottomDStyle:(BOOL)a2;
- (void)halfPanelViewTap;
- (void)createFullScreenMixPanelView;
- (void)createSecondHalfScreenMixPanelViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 onlyUpdate:(BOOL)a1;
- (void)createResultFullScreenPanelView;
- (void)createResultHalfScreenPanelView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)createFullScreenPanelSubviewWithRetryBtnBottomSpace:(double)a0;
- (void)createHalfScreenPanelSubViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 onlyUpdate:(BOOL)a1;
- (void)createBottomHalfScreenPanelSubViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)linesOverTwo;
- (void)backgroudPlay;
- (void)subTitlelabelClicked;
- (void)retryButtonPress:(id)a0;
- (void)createFullScreenPanelView;
- (void)resetStatus;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setTitleLabelHidden:(BOOL)a0;

@end
