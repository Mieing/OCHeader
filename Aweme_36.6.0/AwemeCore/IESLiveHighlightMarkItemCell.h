@class UIImageView, IESLiveHighlightGradientView, UILabel;
@protocol IESLiveHighlightMarkItemCellDelegate;

@interface IESLiveHighlightMarkItemCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *coverView;
@property (retain, nonatomic) IESLiveHighlightGradientView *detailView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *checkBoxBtn;
@property (weak, nonatomic) id<IESLiveHighlightMarkItemCellDelegate> delegate;

- (void)refreshWithItem:(id)a0;
- (void)checkBoxBtnClicked;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
