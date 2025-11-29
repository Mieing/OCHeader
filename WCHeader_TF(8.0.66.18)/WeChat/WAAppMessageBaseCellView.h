@class WAAppMessageBaseViewModel;

@interface WAAppMessageBaseCellView : CommonMessageCellView

@property (readonly, nonatomic) WAAppMessageBaseViewModel *viewModel;

- (id)operationMenuItems;
- (void)onTouchUpInside;
- (BOOL)canShowFavoriteMenuItem;
- (void)onWAForward:(id)a0;
- (void)onMore:(id)a0;

@end
