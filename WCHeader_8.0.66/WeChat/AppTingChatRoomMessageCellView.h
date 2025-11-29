@class TingSharedChatRoomView, AppTingChatRoomMessageViewModel;

@interface AppTingChatRoomMessageCellView : CommonMessageCellView

@property (retain, nonatomic) TingSharedChatRoomView *chatRoomContentView;
@property (nonatomic) long long closedState;
@property (readonly, nonatomic) AppTingChatRoomMessageViewModel *viewModel;

- (void)prepareForReuse;
- (void)layoutContentView;
- (void)onThumbImageCompleted:(BOOL)a0;
- (void)setHighlighted:(BOOL)a0;
- (id)categoryItem;
- (id)listenItem;
- (id)operationMenuItems;
- (void)onForward:(id)a0;
- (BOOL)canShowFavoriteMenuItem;
- (void)onFavorite:(id)a0;
- (void)onAppear;
- (void)tryUpdateChatroomInfo;
- (void)onTouchUpInside;
- (void)onClickAsRefer;
- (void).cxx_destruct;

@end
