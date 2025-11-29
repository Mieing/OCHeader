@class UIImageView, UILabel, CAShapeLayer;

@interface IESLiveMediaMultiLinkNotificationPlayerItemView : UIView

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) CAShapeLayer *staticAvatarBorderLayer;
@property (retain, nonatomic) CAShapeLayer *animatedAvatarBorderLayer;
@property (retain, nonatomic) UILabel *followTagView;
@property (retain, nonatomic) UIImageView *genderImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *descLabel;

- (id)makeAvatarBorderLayer;
- (void)p_startBeating;
- (id)initWithPlayer:(id)a0 needBetaing:(BOOL)a1 nameMaxWidth:(double)a2 showFanTicket:(BOOL)a3;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
