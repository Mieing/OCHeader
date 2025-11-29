@class AWEIMGeneralCardView, NSString, UIImageView, AWEButton, UILabel, UIView;

@interface AWEIMSharePlayRemoteMessageTableViewCell : AWEIMUserMessageTableViewCell <AWELiveRoomMessage>

@property (retain, nonatomic) UIView *inviteContainerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIImageView *logoImageView;
@property (retain, nonatomic) AWEButton *enterBtn;
@property (retain, nonatomic) AWEIMGeneralCardView *cardView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })contentSizeWithMesasge:(id)a0;
+ (id)identifier;

- (void)anchorEndLiveWithConfig:(id)a0;
- (void)configWithMessage:(id)a0;
- (void)p_refreshUIWithStatus:(unsigned long long)a0;
- (id)menuTargetView;
- (void)p_requestRoomStatusWithRoomID:(id)a0 completion:(id /* block */)a1;
- (id)p_getCardViewTitleTextWithPart1:(id)a0 part2:(id)a1 isSubTitle:(BOOL)a2;
- (id)p_subtitleTextWithStatus:(BOOL)a0;
- (void)enterBtnTapped;
- (void)p_requestRoomInfoWithCompletion:(id /* block */)a0;
- (void)p_refreshNewCardWithReopenIfNeeded;
- (void)p_reopenPlayRemoteRoom;
- (id)p_roomPrivacyStatus:(long long)a0;
- (void)p_setLiveRoomStatusWithID:(id)a0 roomStatus:(BOOL)a1 linkDays:(id)a2 linkInterval:(id)a3;
- (void)p_updatePlayRoomMessageFromIMStorage;
- (void)p_refreshTitleIfNeeded;
- (void)p_refreshOldCardIfNeeded;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)prepareForReuse;
- (id)menuItems;
- (void)layoutSubviews;
- (void)setupUI;

@end
