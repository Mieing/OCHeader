@class AWENoticeFollowButton, UIView;

@interface AWEIMFansActionContainer : AWEIMFansBaseContainer

@property (retain, nonatomic) AWENoticeFollowButton *followBtn;
@property (retain, nonatomic) UIView *disclosureIndicatorView;
@property (nonatomic) BOOL replyFriendIMShowTracked;

- (void)updateFollowBtnWithType:(unsigned long long)a0;
- (void)setFollowButtonHidden:(BOOL)a0;
- (id)accessibilityActions;
- (void)configWithViewModel:(id)a0;
- (void)followBtnClicked:(id)a0;
- (void)updateLayout;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setupViews;
- (void)setupLayout;

@end
