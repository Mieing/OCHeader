@interface AWEIMFeedCardMessage : AWEIMCardMessage

- (BOOL)isAllowedCellEdit;
- (BOOL)isUserCellType;
- (BOOL)isAllowedEmojiReply;
- (BOOL)shouldShowNicknameWithMessageType;
- (BOOL)shouldChangeVisibleStatus;
- (BOOL)isAllowedForward;
- (id)itemIDUsedForContentAvailableRefresh;
- (id)authorName;

@end
