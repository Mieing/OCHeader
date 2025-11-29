@class UILabel, MMWebImageView, WCFinderSharePOIRelatedStreamCellViewModel;

@interface WCFinderSharePOIRelatedStreamCellView : CommonMessageCellView

@property (retain, nonatomic) WCFinderSharePOIRelatedStreamCellViewModel *viewModel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) MMWebImageView *webImageView;

- (void)layoutContentView;
- (id)operationMenuItems;
- (void)onTouchUpInside;
- (void).cxx_destruct;

@end
