@class MMUILabel, NSString, MMWebImageView, MMUIButton, COpenIMCustomToolBarItem;
@protocol WWKFCustomToolBarItemCellDelegate;

@interface WWKFCustomToolBarItemCell : UICollectionViewCell {
    MMUIButton *_roundedContainer;
    MMWebImageView *_headView;
    MMUILabel *_titleLabel;
    NSString *_lastImageUrl;
}

@property (retain, nonatomic) COpenIMCustomToolBarItem *model;
@property (weak, nonatomic) id<WWKFCustomToolBarItemCellDelegate> delegate;

+ (id)LabelFont;
+ (double)WidthToFitTitle:(id)a0;
+ (struct CGSize { double x0; double x1; })SizeToFitModel:(id)a0;
+ (double)CellHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)initViews;
- (void)updateWithModel:(id)a0;
- (void)layoutSubviews;
- (void)onTapContainer:(id)a0;
- (void).cxx_destruct;

@end
