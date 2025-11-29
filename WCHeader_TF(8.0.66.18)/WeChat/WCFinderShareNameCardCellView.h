@class WCFinderShareNameCardCellViewModel, UILabel, WCFinderAuthInfoIconView;

@interface WCFinderShareNameCardCellView : CommonMessageCellView

@property (readonly, nonatomic) WCFinderShareNameCardCellViewModel *viewModel;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) WCFinderAuthInfoIconView *icon;

- (void)layoutContentView;
- (id)operationMenuItems;
- (void)onTouchUpInside;
- (void).cxx_destruct;

@end
