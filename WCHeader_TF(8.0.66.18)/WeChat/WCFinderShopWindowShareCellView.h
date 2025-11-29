@class WCFinderShopWindowShareCellViewModel;

@interface WCFinderShopWindowShareCellView : CommonMessageCellView

@property (class, readonly, nonatomic) double bottomHeight;

@property (retain, nonatomic) WCFinderShopWindowShareCellViewModel *viewModel;

+ (id)buildConfigWithShareItem:(id)a0;

- (void)onAppear;
- (void)layoutContentView;
- (void)traitCollectionDidChange:(id)a0;
- (id)operationMenuItems;
- (void)onTouchUpInside;

@end
