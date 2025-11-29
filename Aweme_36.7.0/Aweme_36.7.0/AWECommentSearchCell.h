@class UIImageView, AWEButton, AWEUserNameLabel, AWEUserModel;
@protocol AWECommentSearchCellDelegate;

@interface AWECommentSearchCell : UITableViewCell

@property (weak, nonatomic) id<AWECommentSearchCellDelegate> delegate;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIImageView *verifyBadgeView;
@property (retain, nonatomic) AWEUserNameLabel *nameLabel;
@property (retain, nonatomic) AWEButton *messageBtn;
@property (retain, nonatomic) AWEUserModel *user;

+ (id)defaultAvatarImage;
+ (id)identifier;

- (void)p_sendMessageToUser;
- (void)configWithUser:(id)a0 isDefaultSearch:(BOOL)a1 currentInputText:(id)a2;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)p_init;

@end
