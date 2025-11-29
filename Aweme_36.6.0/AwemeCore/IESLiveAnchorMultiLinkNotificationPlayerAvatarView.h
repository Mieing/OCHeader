@class UIImageView, CAShapeLayer;

@interface IESLiveAnchorMultiLinkNotificationPlayerAvatarView : UIView

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) CAShapeLayer *staticAvatarBorderLayer;
@property (retain, nonatomic) CAShapeLayer *animatedAvatarBorderLayer;
@property (nonatomic) double avatarSideLen;

- (id)makeAvatarBorderLayer;
- (void)p_startBeating;
- (id)initWithAvatarSizeLen:(double)a0 imageURLs:(id)a1 needBeating:(BOOL)a2;
- (void)updateAvatarWithImageURLs:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
