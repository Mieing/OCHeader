@class AWEIMShareModel, NSString, UIImageView, IESIMButton, UILabel, UIView;
@protocol AWEIMHalfScreenCurrentGroupTableCellDelegate, AWEIMStreakDisplayManagerProtocol;

@interface AWEIMHalfScreenCurrentGroupTableViewCell : UITableViewCell <AWEIMStreakDisplayManagerDelegate>

@property (weak, nonatomic) id<AWEIMHalfScreenCurrentGroupTableCellDelegate> delegate;
@property (retain, nonatomic) UIView *nonButtonView;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIImageView *nextTapImageView;
@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) UILabel *statusLabel;
@property (retain, nonatomic) UIView *imStreakView;
@property (retain, nonatomic) IESIMButton *inviteButton;
@property (retain, nonatomic) UIView *bottomLine;
@property (copy, nonatomic) NSString *uniqueFlag;
@property (copy, nonatomic) NSString *pageIdentifier;
@property (retain, nonatomic) UIView *onlineDotView;
@property (nonatomic) BOOL noNeedBackgroundColor;
@property (nonatomic) BOOL isFullScreenStyle;
@property (retain, nonatomic) AWEIMShareModel *shareModel;
@property (retain, nonatomic) id<AWEIMStreakDisplayManagerProtocol> imStreakDisplayManager;
@property (copy, nonatomic) id /* block */ trackShowConsecutiveChatBlock;

+ (id)identifier;

- (BOOL)hitStreakUpdateExp;
- (void)updateActiveStatusWithShareModel:(id)a0;
- (id)p_backgroundColor;
- (void)__configWithParamDict:(id)a0;
- (void)__updateInviteButtonWithInRelation:(BOOL)a0 selfAccept:(BOOL)a1;
- (void)__updateConsecutiveChatStatusWithShareModel:(id)a0;
- (void)updateStreakStatusWithUserID:(id)a0 shareModel:(id)a1 conversation:(id)a2;
- (void)__inviteButtonTapped:(id)a0;
- (void)configWithShareModel:(id)a0 paramDict:(id)a1;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;

@end
