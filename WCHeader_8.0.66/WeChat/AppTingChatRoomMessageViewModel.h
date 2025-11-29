@class TingShareChatRoomItem;

@interface AppTingChatRoomMessageViewModel : CommonMessageViewModel

@property (readonly, nonatomic) TingShareChatRoomItem *shareChatRoomItem;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (id)cellViewClassName;
- (double)cellHeight;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)shouldShowSourceViewInContent;
- (BOOL)isShowSourceView;
- (id)tingShareChatRoomBackgroundColor;
- (id)additionalAccessibilityDescription;
- (id)accessibilityMessageType;
- (void)onMessageDownloadThumbImageOK;
- (void)OnMsgDownloadThumbFail:(id)a0 MsgWrap:(id)a1;
- (BOOL)hasReferImage;
- (id)getReferImage;

@end
