@class IESLivelinkmicAudienceRecommendItem, CAGradientLayer, UIImageView, CAShapeLayer, UILabel, IESLiveRollLabel, UIButton;
@protocol IESLiveLinkMicResultRecommendViewDelegate;

@interface IESLiveLinkMicResultRecommendView : UIView

@property (retain, nonatomic) IESLivelinkmicAudienceRecommendItem *item;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIImageView *animationImageView;
@property (retain, nonatomic) UIImageView *liveMarkViewTag;
@property (retain, nonatomic) CAShapeLayer *markClipLayer;
@property (retain, nonatomic) CAGradientLayer *markColorLayer;
@property (retain, nonatomic) CAShapeLayer *markClipLayerForAniamtion;
@property (retain, nonatomic) CAGradientLayer *markColorLayerForAnimation;
@property (retain, nonatomic) UILabel *nickNameLabel;
@property (retain, nonatomic) IESLiveRollLabel *descLabel;
@property (retain, nonatomic) UIButton *linkButton;
@property (nonatomic) double lastClickTimeStamp;
@property (retain, nonatomic) UIImageView *emptyImageView;
@property (weak, nonatomic) id<IESLiveLinkMicResultRecommendViewDelegate> delegate;

- (void)onClickAvatar;
- (void)setupEmptyView;
- (void)onClickChangeAction;
- (void)startNewBreatheAnimationWithView;
- (void)onClickLinkButton;
- (void)updateWithItem:(id)a0;
- (void).cxx_destruct;
- (id)initWithItem:(id)a0;
- (void)setupView;

@end
