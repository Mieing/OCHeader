@class WCFinderEndorsementCellViewModel, UILabel;

@interface WCFinderEndorsementCellView : CommonMessageCellView

@property (readonly, nonatomic) WCFinderEndorsementCellViewModel *viewModel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;

- (void)layoutContentView;
- (id)displayIconName;
- (id)nameLabel;
- (id)operationMenuItems;
- (void)onTouchUpInside;
- (void).cxx_destruct;

@end
