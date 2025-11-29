@class UIStackView, UIButton, UIImageView, UITapGestureRecognizer, UIView, UILabel, BDPPlayableGameFloatBallModel;
@protocol BDPPlayableGameFloatBallDelegate;

@interface BDPPlayableGameFloatBall : UIView

@property (retain, nonatomic) BDPPlayableGameFloatBallModel *model;
@property (retain, nonatomic) UIView *backgroundMaskView;
@property (retain, nonatomic) UIView *normalTypeMaskView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIStackView *labelStackView;
@property (retain, nonatomic) UILabel *gameNameLabel;
@property (retain, nonatomic) UILabel *gameDescLabel;
@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) UITapGestureRecognizer *expandTapGesture;
@property (retain, nonatomic) UIImageView *arrowIconView;
@property (nonatomic) BOOL isExpand;
@property (weak, nonatomic) id<BDPPlayableGameFloatBallDelegate> delegate;

- (void)addGesture;
- (void)handleButtonClick;
- (void)onPanFloatBall:(id)a0;
- (void)handlePaning:(struct CGPoint { double x0; double x1; })a0;
- (double)getValidY:(double)a0;
- (void)updateFloatBallStatus:(BOOL)a0;
- (void)setupNormalContent;
- (void)onClickArrowButton:(id)a0;
- (void)showFloatBall;
- (void)hideFloatBall;
- (void)setupArrowIcon;
- (void)addExpandGesture;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;

@end
