@class UIButton, LSIMCommonModalViewController, UIImageView, LSIMBizParticipant, UILabel, YYLabel;

@interface LSIMMerchantPersonalDetailModalView : UIView

@property (retain, nonatomic) LSIMBizParticipant *merchantMember;
@property (copy, nonatomic) id /* block */ makeConversationBlock;
@property (retain, nonatomic) UIImageView *closeImageView;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) YYLabel *merchantTagLabel;
@property (retain, nonatomic) UIImageView *shopIconImageView;
@property (retain, nonatomic) UILabel *shopNameLabel;
@property (retain, nonatomic) UIButton *makeConversationButton;
@property (weak, nonatomic) LSIMCommonModalViewController *modalVC;

+ (long long)modalViewHeight;

- (void)initView;
- (void)closeImageViewTapped;
- (void)makeConversationButtonTapped;
- (id)initWithMerchantGroupMember:(id)a0 makeConversationBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (id)contentView;

@end
