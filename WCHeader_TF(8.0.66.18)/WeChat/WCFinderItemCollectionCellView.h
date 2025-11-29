@class UIView, UIImageView, UILabel, WCFinderItemCollectionCellViewModel, MMWebImageView;

@interface WCFinderItemCollectionCellView : CommonMessageCellView

@property (readonly, nonatomic) WCFinderItemCollectionCellViewModel *viewModel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) MMWebImageView *thumbImageView;
@property (retain, nonatomic) UIView *separator;
@property (retain, nonatomic) UIImageView *tinyIcon;
@property (retain, nonatomic) UILabel *finderLabel;

- (BOOL)canBeReused;
- (void)layoutContentView;
- (void)onAppear;
- (void)_setupUI;
- (void)_setupLayout;
- (id)operationMenuItems;
- (void)onTouchUpInside;
- (void)_reportViewExpWithViewID:(id)a0 isFavorite:(BOOL)a1;
- (void).cxx_destruct;

@end
