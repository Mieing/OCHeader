@class UIButton, UIView, WCFinderGradientView, WCFinderFeedContentVM, UILabel, MMUIButton, WCFinderNormalProgressBar;
@protocol WCFinderFeedDetailVideoProgressViewDelegate;

@interface WCFinderFeedDetailVideoProgressView : UIView

@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (retain, nonatomic) WCFinderNormalProgressBar *progressBar;
@property (retain, nonatomic) MMUIButton *pauseButton;
@property (retain, nonatomic) UILabel *timeLabelInLeft;
@property (retain, nonatomic) UILabel *timeLabelInRight;
@property (retain, nonatomic) MMUIButton *playRateButton;
@property (retain, nonatomic) MMUIButton *fullScreenBtn;
@property (retain, nonatomic) MMUIButton *bulletButton;
@property (retain, nonatomic) UIButton *bulletSwitchButton;
@property (retain, nonatomic) UIButton *bulletInputButton;
@property (retain, nonatomic) UIView *closeBtnView;
@property (retain, nonatomic) WCFinderGradientView *progressBarGradientView;
@property (nonatomic) BOOL fullScreenState;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } layoutBounds;
@property (weak, nonatomic) id<WCFinderFeedDetailVideoProgressViewDelegate> delegate;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (void)setupViews;
- (void)updatePauseButtonImage;
- (void)layoutViews;
- (void)layoutSubviews;
- (void)updateWithContentVM:(id)a0;
- (void)updateFullScreenState:(BOOL)a0;
- (void)updateBulletState;
- (void)updateBulletUIStateWithDataItem:(id)a0 isLandScape:(BOOL)a1;
- (void)changeProgressValueWithCurrentTime:(double)a0 totalTime:(double)a1 forbitProgressBarMovAni:(BOOL)a2;
- (void)changeTimeLabelWithCurStr:(id)a0 totalStr:(id)a1;
- (void)setProgressBarHighlight:(BOOL)a0;
- (double)progressBarValue;
- (void)setPauseBtnAlpha:(double)a0;
- (void)setPauseBtnStateIsPause:(BOOL)a0;
- (BOOL)getPauseBtnStateIsPause;
- (void)setHidden:(BOOL)a0 autoHide:(BOOL)a1;
- (void)hideSelf;
- (void)onClickPauseBtn:(id)a0;
- (void)onClickFullScreenBtn;
- (void)onClickBulletBtn;
- (void)onClickBulletInputButton;
- (void)onClickBulletSwitchButton:(id)a0;
- (void)onClickPlayRateButton;
- (void)onCloseButtonClicked;
- (void).cxx_destruct;

@end
