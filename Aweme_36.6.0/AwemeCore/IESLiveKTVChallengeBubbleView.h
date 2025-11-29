@class UIImageView, IESLiveGCDTimer, UIView, UILabel, IESLiveKTVChallengeModel;

@interface IESLiveKTVChallengeBubbleView : UIView

@property (nonatomic) int challengeType;
@property (retain, nonatomic) IESLiveKTVChallengeModel *challengeModel;
@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) UIView *challengeTypeView;
@property (retain, nonatomic) UILabel *targetLabel;
@property (retain, nonatomic) UILabel *dividerLabel;
@property (retain, nonatomic) UILabel *scoreLabel;
@property (retain, nonatomic) UILabel *statusLabel;
@property (retain, nonatomic) IESLiveGCDTimer *timer;

- (void)invalidataTimer;
- (void)showStatus;
- (void)showScore;
- (void)updateChallengeStatus:(unsigned long long)a0;
- (id)initWithChallengeType:(int)a0;
- (void)bindChallengeModel:(id)a0;
- (id)challengeTypeViewWithType:(int)a0;
- (void)updateBubbleArrowStyle:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)setupSubviews;

@end
