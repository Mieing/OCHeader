@class UILabel, UIImageView, UIView;

@interface IESLiveAnchorMultiLinkNotificationPlayerItemView : UIView

@property (retain, nonatomic) UIView *avatarView;
@property (retain, nonatomic) UILabel *followTagView;
@property (retain, nonatomic) UILabel *inviterTagView;
@property (retain, nonatomic) UIImageView *genderImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIView *matchTagContainerView;

- (struct CGSize { double x0; double x1; })tagContentSize4Text:(id)a0 font:(id)a1;
- (id)initWithPlayer:(id)a0 needBetaing:(BOOL)a1 nameMaxWidth:(double)a2 showFanTicket:(BOOL)a3 showInviterTag:(BOOL)a4 anchorMatchTags:(id)a5;
- (void).cxx_destruct;

@end
