@class AppRecordMessageViewModel;

@interface AppRecordMessageCellView : AppStandardTextContentMessageCellView

@property (readonly, nonatomic) AppRecordMessageViewModel *viewModel;

- (id)operationMenuItems;
- (void)onTouchUpInside;

@end
