@class TingSharedListView, AppTingListMessageViewModel;
@protocol TingFlowPlayerProtocol;

@interface AppTingListMessageCellView : CommonMessageCellView

@property (retain, nonatomic) TingSharedListView *listContentView;
@property (retain, nonatomic) id<TingFlowPlayerProtocol> player;
@property (readonly, nonatomic) AppTingListMessageViewModel *viewModel;

- (void)prepareForReuse;
- (void)layoutContentView;
- (void)onThumbImageCompleted:(BOOL)a0;
- (void)setHighlighted:(BOOL)a0;
- (id)categoryItem;
- (id)operationMenuItems;
- (void)onForward:(id)a0;
- (void)onFavorite:(id)a0;
- (void)onAppear;
- (void)onTouchUpInside;
- (void)onClickAsRefer;
- (void).cxx_destruct;

@end
