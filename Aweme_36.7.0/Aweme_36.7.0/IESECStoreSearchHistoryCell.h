@class UIImageView, IESECStoreSearchHistoryCellVM, UILabel, UIView;

@interface IESECStoreSearchHistoryCell : UICollectionViewCell

@property (retain, nonatomic) IESECStoreSearchHistoryCellVM *viewModel;
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
