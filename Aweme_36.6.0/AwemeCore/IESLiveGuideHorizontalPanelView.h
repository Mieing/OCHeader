@class UIImageView, UIView, UILabel, UIButton;
@protocol IESLiveGuideHorizontalPanelViewDelegate;

@interface IESLiveGuideHorizontalPanelView : UIView

@property (retain, nonatomic) UIView *topContainerView;
@property (retain, nonatomic) UIView *bottomContainerView;
@property (retain, nonatomic) UIView *switchView;
@property (retain, nonatomic) UIButton *originalRatioButton;
@property (retain, nonatomic) UIButton *fourToThreeRatioButton;
@property (retain, nonatomic) UIButton *sixteenToNineRatioButton;
@property (retain, nonatomic) UIImageView *descImageView;
@property (retain, nonatomic) UILabel *descLabel;
@property (nonatomic) unsigned long long currentRatio;
@property (weak, nonatomic) id<IESLiveGuideHorizontalPanelViewDelegate> delegate;

- (id)initWithOpenLiveRatio:(unsigned long long)a0;
- (void)switchToOriginalRatio;
- (void)switchToFourToThreeRatio;
- (void)switchToSixteenToNineRatio;
- (void)changeLiveRatio;
- (void).cxx_destruct;
- (void)setupUI;
- (void)updateUI;

@end
