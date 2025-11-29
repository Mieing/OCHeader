@class AWEIMGeneralCardView, AWEIMBatManInviteMessage;

@interface AWEIMBatManInviteTableViewCell : AWEIMUserMessageTableViewCell

@property (retain, nonatomic) AWEIMGeneralCardView *cardView;
@property (retain, nonatomic) AWEIMBatManInviteMessage *gameMessage;

+ (struct CGSize { double x0; double x1; })contentSizeWithMesasge:(id)a0;
+ (id)identifier;

- (void)configWithMessage:(id)a0;
- (void)p_refreshUIWithStatus:(unsigned long long)a0;
- (void)p_refreshBatManRoomStatusWithMessage:(id)a0;
- (void)p_enterBtnTapped;
- (void)p_requestRoomStatusWithGameID:(id)a0 roomID:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)menuItems;
- (void)layoutSubviews;
- (void)setupUI;
- (void)willDisplayCell;

@end
