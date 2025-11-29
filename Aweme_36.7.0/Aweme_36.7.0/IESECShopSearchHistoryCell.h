@class UIImageView, IESECShopSearchHistoryCellVM, UIView, UILabel;

@interface IESECShopSearchHistoryCell : UICollectionViewCell

@property (retain, nonatomic) IESECShopSearchHistoryCellVM *viewModel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *deleteBtn;
@property (retain, nonatomic) UIImageView *foldBtn;

+ (struct CGSize { double x0; double x1; })cellSizeWithViewModel:(id)a0;

- (void)bindViewModel:(id)a0;
- (void)foldBtnTapped;
- (void)containerTapped;
- (void)deleteBtnTapped;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
