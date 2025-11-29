@class UIImageView, UILabel, UIView, UIButton;
@protocol IESLiveLGameDuringLiveInfoCardViewDelegate;

@interface IESLiveLGameDuringLiveGameCardView : UIView

@property (retain, nonatomic) UIImageView *gameIcon;
@property (retain, nonatomic) UIView *explainingContainer;
@property (retain, nonatomic) UILabel *gameNameLabel;
@property (retain, nonatomic) UILabel *gameDescriptionLabel;
@property (retain, nonatomic) UIButton *explainButton;
@property (retain, nonatomic) UIButton *lotteryButton;
@property (weak, nonatomic) id<IESLiveLGameDuringLiveInfoCardViewDelegate> viewDelegate;

- (void)updateExplainButtonState:(unsigned long long)a0;
- (id)buildBaseButton;
- (void)onExplainButtonClick;
- (void)onLotteryButtonClick;
- (void)updateViewWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
