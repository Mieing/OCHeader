@class AWEIMCloseFriendInviteCardView;

@interface AWEIMCloseFriendInviteMessageTableViewCell : AWEIMUserMessageTableViewCell

@property (retain, nonatomic) AWEIMCloseFriendInviteCardView *cardView;

+ (struct CGSize { double x0; double x1; })contentSizeWithMesasge:(id)a0;
+ (id)identifier;

- (void)configWithMessage:(id)a0;
- (void)p_initSubview;
- (void)coverTapped;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)menuItems;
- (void)setupUI;

@end
