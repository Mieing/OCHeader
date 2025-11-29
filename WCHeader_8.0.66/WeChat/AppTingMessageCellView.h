@class TingItem, AppTingMessageViewModel, TingSharedAudioView;

@interface AppTingMessageCellView : CommonMessageCellView

@property (retain, nonatomic) TingSharedAudioView *audioContentView;
@property (retain, nonatomic) TingItem *tingItem;
@property (readonly, nonatomic) AppTingMessageViewModel *viewModel;

- (void)prepareForReuse;
- (void)layoutContentView;
- (void)onThumbImageCompleted:(BOOL)a0;
- (void)reload;
- (void)setHighlighted:(BOOL)a0;
- (id)shareListenItem;
- (id)categoryItem;
- (id)addToListenStarMenuItem;
- (void)onAddToListenStar:(id)a0;
- (BOOL)canShowAddToStarMenuItem;
- (id)operationMenuItems;
- (void)onForward:(id)a0;
- (void)onFavorite:(id)a0;
- (void)onAppear;
- (void)onTouchUpInside;
- (BOOL)isFromMusicShake;
- (BOOL)canClickSourceView;
- (void)onAppButtonClicked:(id)a0;
- (void)addMagicTapActions:(id)a0;
- (BOOL)handleMagicTapAction:(id)a0;
- (void)onClickAsRefer;
- (void).cxx_destruct;

@end
