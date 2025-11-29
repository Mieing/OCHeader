@class AppProductMessageViewModel;

@interface AppProductMessageCellView : AppUrlMessageCellView

@property (readonly, nonatomic) AppProductMessageViewModel *viewModel;

- (id)operationMenuItems;

@end
