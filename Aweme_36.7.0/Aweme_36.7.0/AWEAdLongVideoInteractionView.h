@class UIButton, AWEAdLongVideoTimerView, AWEAwemeModel, AWEAdLongVideoLearnMoreView, UIView, AWEAdTagView;

@interface AWEAdLongVideoInteractionView : UIView

@property (retain, nonatomic) UIView *baseContainerView;
@property (nonatomic) long long orientationType;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEAdLongVideoLearnMoreView *learnMoreView;
@property (retain, nonatomic) AWEAdLongVideoTimerView *timerView;
@property (retain, nonatomic) AWEAdTagView *adTagView;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIView *enterFullScreenView;

- (void)setupPortraitConstraints;
- (void)setupLandscapeConstraints;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
