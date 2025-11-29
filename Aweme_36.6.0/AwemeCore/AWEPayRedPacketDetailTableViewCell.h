@class NSString, UIImageView, UILabel, AWEIMDouyinRedPacketReceiveUserModel, MASConstraint;
@protocol AWEPayRedPacketDetailTableViewCellDelegate;

@interface AWEPayRedPacketDetailTableViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *bottomLeftLabel;
@property (retain, nonatomic) UILabel *amountLabel;
@property (retain, nonatomic) UILabel *bottomRightLabel;
@property (retain, nonatomic) UIImageView *bottomRightImage;
@property (retain, nonatomic) UILabel *rewardAmountLabel;
@property (retain, nonatomic) UIImageView *clickEmoticonView;
@property (retain, nonatomic) UILabel *rpLabel;
@property (copy, nonatomic) NSString *secUserID;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *fromUserId;
@property (retain, nonatomic) AWEIMDouyinRedPacketReceiveUserModel *userModel;
@property (retain, nonatomic) AWEIMDouyinRedPacketReceiveUserModel *fromUserModel;
@property (retain, nonatomic) MASConstraint *exLabelWidth;
@property (nonatomic) BOOL isExchangeRP;
@property (weak, nonatomic) id<AWEPayRedPacketDetailTableViewCellDelegate> delegate;
@property (nonatomic) BOOL needShowClickEmoticon;
@property (copy, nonatomic) id /* block */ emoticonClickBlock;

+ (id)dateForMatterWithIsSameDay:(BOOL)a0;
+ (id)hourDateFormatter;
+ (id)dayDateFormatter;

- (void)nameLabelTapped:(id)a0;
- (void)p_setupExchangeLabel;
- (void)transferToFromUser:(id)a0;
- (void)p_emoticonClick;
- (void)configWithUserModel:(id)a0 conversation:(id)a1;
- (void)configWithUserModel:(id)a0 fromUserModel:(id)a1 conversationId:(id)a2;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)avatarTapped:(id)a0;

@end
