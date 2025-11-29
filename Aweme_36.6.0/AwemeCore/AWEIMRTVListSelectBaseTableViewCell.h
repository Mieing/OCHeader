@class NSString, AWEIMRTVListSelectBaseTableViewCellContext, UILabel, UIView;

@interface AWEIMRTVListSelectBaseTableViewCell : AWEIMUserTableViewCell <AWEIMRTVSelectUserTableViewCellProtocol>

@property (readonly, nonatomic) AWEIMRTVListSelectBaseTableViewCellContext *context;
@property (readonly, nonatomic) UILabel *friendLabel;
@property (readonly, nonatomic) UILabel *onlineStateLabel;
@property (readonly, nonatomic) UIView *onlineIndicatorView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)sigLabel;
- (void)renderModel:(id)a0 context:(id)a1;
- (void)__createComponents;
- (void)__layoutComponents;
- (id)verifiedLogoView;
- (void)__configComponents;
- (void)__updateComponents;
- (void)__createVoipFriendLabel;
- (void)__createOnlineStateLabel;
- (void)__createOnlineIndicatorView;
- (void)__configVoipFriendLabel;
- (void)__configOnlineStateLabel;
- (void)__layoutNameLabel;
- (void)__layoutVoipFriendLabel;
- (void)__layoutOnlineStateLabel;
- (void)__layoutOnlineIndicatorView;
- (void)__updateVoipFriendLabel;
- (void)__updateOnlineStateLabel;
- (void)__updateOnlineIndicatorView;
- (BOOL)__isLightStyle;
- (BOOL)__isFollowStatusFriends;
- (id)awemeUpdateCountLabel;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)refreshUI;
- (void)layoutSubviews;

@end
