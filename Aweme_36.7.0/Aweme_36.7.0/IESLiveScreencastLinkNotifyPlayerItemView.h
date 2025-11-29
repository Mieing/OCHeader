@class UIImageView, CAShapeLayer, UILabel, UIView;

@interface IESLiveScreencastLinkNotifyPlayerItemView : UIView

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) CAShapeLayer *staticAvatarBorderLayer;
@property (retain, nonatomic) CAShapeLayer *animatedAvatarBorderLayer;
@property (retain, nonatomic) UILabel *followTagView;
@property (retain, nonatomic) UIImageView *genderImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIView *gameLabelContainer;
@property (retain, nonatomic) UILabel *fansLabel;
@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) UILabel *gameNameLabel;

- (id)makeAvatarBorderLayer;
- (void)p_startBeating;
- (id)initWithPlayer:(id)a0 needBetaing:(BOOL)a1 gameText:(id)a2 nameMaxWidth:(double)a3;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
