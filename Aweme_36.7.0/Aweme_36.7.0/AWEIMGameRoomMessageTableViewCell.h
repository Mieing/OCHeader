@class AWEIMGeneralCardView, UIControl, AWEIMGameRoomInviteMessage, UILabel, AWEIMRefreshImageView;

@interface AWEIMGameRoomMessageTableViewCell : AWEIMUserMessageTableViewCell

@property (retain, nonatomic) AWEIMGameRoomInviteMessage *gameMessage;
@property (retain, nonatomic) AWEIMGeneralCardView *cardView;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UILabel *statusLabel;
@property (readonly, nonatomic) AWEIMRefreshImageView *coverImgView;
@property (readonly, nonatomic) UIControl *inviteContainerView;

+ (struct CGSize { double x0; double x1; })contentSizeWithMesasge:(id)a0;
+ (id)identifier;

- (void)configWithMessage:(id)a0;
- (void)p_refreshUIWithStatus:(unsigned long long)a0;
- (void)p_enterBtnTapped;
- (void)p_requestRoomStatusWithGameID:(id)a0 roomID:(id)a1 completion:(id /* block */)a2;
- (void)afterMessageConfigured;
- (void)p_trackGameCardDidAppear;
- (void)p_trackGameDidTapped;
- (void).cxx_destruct;
- (id)menuItems;
- (void)layoutSubviews;
- (void)setupUI;
- (void)willDisplayCell;

@end
