@class AWEIMGameRoomInviteMessageV2;

@interface AWEIMGameRoomMessageTableViewCellV2 : AWEIMGameRoomMessageTableViewCell

@property (retain, nonatomic) AWEIMGameRoomInviteMessageV2 *gameMessageV2;

+ (id)identifier;

- (void)p_refreshUIWithStatus:(unsigned long long)a0;
- (void)p_enterBtnTapped;
- (void)afterMessageConfigured;
- (void)p_trackGameCardDidAppear;
- (void)p_trackGameDidTapped;
- (void)p_refreshGameRoomMessageStatusWithMessage:(id)a0;
- (void)p_requestRoomStatusWithRoomID:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)willDisplayCell;

@end
