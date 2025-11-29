@class IESLiveAudienceInteractiveAnchorInviteFriendHorizontalView;

@interface IESLiveAudienceInteractiveFriendNewCell : UITableViewCell

@property (retain, nonatomic) IESLiveAudienceInteractiveAnchorInviteFriendHorizontalView *listView;

- (void)didSetAttachingDIContextCallOnce;
- (void)updateWithUserList:(id)a0 aiGuestList:(id)a1 clickUserBlock:(id /* block */)a2 clickMoreBlock:(id /* block */)a3 userCellDidShowBlock:(id /* block */)a4 moreCellDidShowBlock:(id /* block */)a5 aiGuestCellDidShowBlock:(id /* block */)a6 clickAiGuestBlock:(id /* block */)a7;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end
