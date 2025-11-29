@class WCFinderOrderShareCellViewModel;

@interface WCFinderOrderShareCellView : CommonMessageCellView

@property (retain, nonatomic) WCFinderOrderShareCellViewModel *viewModel;

- (void)layoutContentView;
- (void)layoutMiniStyle;
- (void)onTouchUpInside;
- (id)operationMenuItems;

@end
