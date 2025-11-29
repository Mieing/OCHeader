@class UIColor, NSString, UIImageView, CAShapeLayer, UIView, UILabel, IESECUIImageView;

@interface IESECMallVideoAuthorView : UIView <IESECMallCardAuthorInfoProtocol>

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIView *avatarImageMaskView;
@property (nonatomic) BOOL isBreatheAnimating;
@property (nonatomic) long long circleLayerRadius;
@property (retain, nonatomic) UIView *avatarImageInnerCircle;
@property (retain, nonatomic) UIView *avatarImageOuterCircle;
@property (retain, nonatomic) CAShapeLayer *innerCircleLayer;
@property (retain, nonatomic) CAShapeLayer *outerCircleLayer;
@property (retain, nonatomic) UILabel *nickNameLabel;
@property (retain, nonatomic) UILabel *liveHeaderDescriptionLabel;
@property (retain, nonatomic) UIImageView *enterLiveIconImageView;
@property (retain, nonatomic) IESECUIImageView *playIconImageView;
@property (retain, nonatomic) UIColor *nickNameLabelDefaultColor;
@property (retain, nonatomic) UIColor *nickNameLabelDefaultColorLite;
@property (copy, nonatomic) NSString *bizTag;
@property (copy, nonatomic) NSString *sceneTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillDisplay;
- (void)viewDidEndDisplay;
- (void)setupBreatheAnimation:(BOOL)a0;
- (void)setupCircleWithWidth:(long long)a0;
- (void)removeBreatheAnimation;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)init;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
