@class AWEIMMessageConversation, UIImageView, IESIMButton, UILabel, AWEUserModel, UIView;

@interface AWEIMStrangerFollowView : UIView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) AWEUserModel *user;
@property (nonatomic) BOOL shouldShowRelationFollowBack;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) IESIMButton *followBtn;
@property (retain, nonatomic) IESIMButton *closeBtn;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (nonatomic) BOOL isMangoScene;

- (void)refreshBackgroundColorWhileHasBackground:(BOOL)a0;
- (void)didFetchFullDetailUser:(id)a0;
- (void)refreshIncentiveChatUIIfNeeded;
- (void)refreshFollowBtnUIWithFollowStatus:(long long)a0 followerStatus:(long long)a1;
- (void)p_addSubviewForTop;
- (id)p_defaultOnlineTips:(id)a0;
- (void)p_refreshFollowBtnUIWithFollowStatusForTop:(long long)a0 followerStatus:(long long)a1;
- (id)p_recommendReasonTips:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
