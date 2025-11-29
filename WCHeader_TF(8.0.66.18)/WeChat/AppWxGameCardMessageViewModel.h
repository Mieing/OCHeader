@interface AppWxGameCardMessageViewModel : BaseMessageViewModel <WeChat.AppWxGameCardMessageViewDelegate>

@property (nonatomic) BOOL isShouldLayout;
@property (readonly, nonatomic) double messageViewWidth;
@property (readonly, nonatomic) double messageViewHeight;
@property (nonatomic) double dynamicCardHeight;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (id)cellViewClassName;
- (id)initWithMessageWrap:(id)a0 contact:(id)a1 chatContact:(id)a2;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isShowHeadImage;
- (BOOL)isShowChatRoomDisplayName;
- (BOOL)isShowSourceView;
- (id)additionalAccessibilityDescription;
- (id)accessibilityMessageType;
- (void)notifySizeChange:(long long)a0;
- (void)notifyViewRemove;
- (BOOL)shouldLayoutIfNeeded;
- (void)showMsgPopupMenu;
- (double)getMsgViewInfo;

@end
