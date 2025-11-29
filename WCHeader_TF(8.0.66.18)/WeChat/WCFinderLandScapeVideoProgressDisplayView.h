@class UILabel, WCFinderPlayRateButton, WCFinderLandScapePlayerParam, UIButton, WCFinderDataItem, MMUIButton, WCFinderNormalProgressBar;
@protocol WCFinderLandScapeVideoProgressDisplayViewDelegate;

@interface WCFinderLandScapeVideoProgressDisplayView : MMUIView

@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (retain, nonatomic) WCFinderLandScapePlayerParam *param;
@property (retain, nonatomic) WCFinderNormalProgressBar *progressBar;
@property (retain, nonatomic) MMUIButton *pauseButton;
@property (retain, nonatomic) UILabel *timeLabelInPortrait;
@property (retain, nonatomic) UILabel *timeLabelInLandScapeLeft;
@property (retain, nonatomic) UILabel *timeLabelInLandScapeRight;
@property (retain, nonatomic) WCFinderPlayRateButton *playRateButton;
@property (retain, nonatomic) MMUIButton *rotateBtn;
@property (retain, nonatomic) MMUIButton *bulletButton;
@property (retain, nonatomic) UIButton *bulletSwitchButton;
@property (retain, nonatomic) UIButton *bulletInputButton;
@property (retain, nonatomic) MMUIButton *returnBtn;
@property (weak, nonatomic) id<WCFinderLandScapeVideoProgressDisplayViewDelegate> delegate;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (void)setupSubViews;
- (void)setupViewLandScapeState;
- (void)updateWithDataItem:(id)a0 param:(id)a1;
- (double)progressBarValue;
- (void)setPauseBtnStateIsPause:(BOOL)a0;
- (void)changeProgressValueWithCurrentTime:(double)a0 totalTime:(double)a1 forbitProgressBarMovAni:(BOOL)a2;
- (void)changeTimeLabelWithCurStr:(id)a0 totalStr:(id)a1;
- (void)setPauseBtnAlpha:(double)a0;
- (void)autoSetHidden:(BOOL)a0;
- (double)progressViewPlayRate;
- (void)hideSelf;
- (void)landScapeStateWillChange:(BOOL)a0;
- (void)updateBulletState;
- (void)updateBulletUIStateWithDataItem:(id)a0 isLandScape:(BOOL)a1;
- (void)layoutSubviews;
- (BOOL)shouldShowRotateBtnWithLandscape:(BOOL)a0;
- (double)progressBarWidth;
- (void)onClickPauseBtn:(id)a0;
- (void)onClickRotateBtn;
- (void)onClickReturnBtn;
- (void)onClickBulletBtn;
- (void)onClickBulletInputButton;
- (void)onClickBulletSwitchButton:(id)a0;
- (void).cxx_destruct;

@end
