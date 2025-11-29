@class AppImageMessageViewModel;

@interface AppImageMessageCellView : ImageMessageCellView

@property (readonly, nonatomic) AppImageMessageViewModel *viewModel;

- (void)showImage;

@end
