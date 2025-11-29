@class MMUIButton, NSArray, ColorGradientView, NSMutableArray, UIView;

@interface WCFinderLiveReplayRateOperationView : UIView

@property (retain, nonatomic) UIView *backView;
@property (retain, nonatomic) ColorGradientView *gradientView;
@property (retain, nonatomic) NSMutableArray *rateBtnList;
@property (nonatomic) double selectedRate;
@property (weak, nonatomic) MMUIButton *selectedBtn;
@property (retain, nonatomic) NSArray *rateList;
@property (nonatomic) BOOL isPortraitLayout;
@property (nonatomic) BOOL isShown;
@property (nonatomic) BOOL isAnimating;
@property (copy, nonatomic) id /* block */ panelOpenCallback;
@property (copy, nonatomic) id /* block */ panelCloseCallback;
@property (copy, nonatomic) id /* block */ onRateChangedCallback;

- (id)initWithRateList:(id)a0 defaultRate:(double)a1;
- (id)initWithDefaultRate:(double)a0;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)handleForLayoutOrientationChanged;
- (void)layoutBackView;
- (void)layoutGradientView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })gradientRect;
- (double)gradientContentWidth;
- (double)gradientContentHeight;
- (void)layoutRateBtns;
- (void)updateRateBtnTitleColor:(id)a0;
- (void)updateRateBtnsOrigin;
- (double)getAllBtnLengthWithBtnDistance:(double)a0;
- (id)getRateText:(double)a0;
- (id)getRateToast:(double)a0;
- (void)onRateButtonClicked:(id)a0;
- (void)onSingleTapGestureRecognizer:(id)a0;
- (void)showPanelWithAnimated;
- (void)closePanelWithAnimated;
- (BOOL)shouldConsumeTouchFromFullScreenGesture:(id)a0 fromView:(id)a1;
- (BOOL)shouldConsumeTouchFromFullScreenPanGesture:(id)a0 fromView:(id)a1;
- (void).cxx_destruct;

@end
