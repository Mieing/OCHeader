@class AppGameShareMessageViewModel;

@interface AppGameShareMessageCellView : AppUrlMessageCellView

@property (readonly, nonatomic) AppGameShareMessageViewModel *viewModel;

- (void)onAppear;
- (void)layoutContentView;
- (void)addVideoIcon;
- (void)updateStatus;
- (void)onTouchUpInside;
- (BOOL)canPeek;
- (id)urlForPreView:(id)a0;
- (id)operationMenuItems;

@end
