@class UIImageView, LSIMBizParticipant, UILabel, YYLabel;
@protocol LSIMMemberSearchTableViewCellDelegate;

@interface LSIMMemberSearchTableViewCell : UITableViewCell

@property (retain, nonatomic) LSIMBizParticipant *member;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *usernameLabel;
@property (retain, nonatomic) YYLabel *ownerTagLabel;
@property (retain, nonatomic) YYLabel *merchantTagLabel;
@property (retain, nonatomic) UIImageView *shopIconImageView;
@property (retain, nonatomic) UILabel *shopNameLabel;
@property (retain, nonatomic) YYLabel *privateChatLabel;
@property (weak, nonatomic) id<LSIMMemberSearchTableViewCellDelegate> delegate;

- (void)privateChatDidTapped;
- (void)configWithMember:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
