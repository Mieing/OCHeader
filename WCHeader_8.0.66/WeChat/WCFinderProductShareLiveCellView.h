@class WCFinderProductShareCellViewModel;

@interface WCFinderProductShareLiveCellView : CommonMessageCellView

@property (retain, nonatomic) WCFinderProductShareCellViewModel *viewModel;

+ (id)buildConfigWithShareItem:(id)a0;

- (void)onAppear;
- (void)willMoveToWindow:(id)a0;
- (void)layoutContentView;
- (void)onTouchUpInside;
- (id)operationMenuItems;

@end
