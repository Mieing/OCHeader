@class UILabel, UIView, MMWebImageView;

@interface GameVideoAlbumCell : UICollectionViewCell {
    MMWebImageView *_imageView;
    UILabel *_titleView;
    UILabel *_subTitleView;
    UILabel *_durationView;
    UIView *_tagViewContainer;
    id _currentCellData;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupGameVideoAlbumCell;
- (void)renderWithCellData:(id)a0;
- (void)addTagViews:(id)a0;
- (void).cxx_destruct;

@end
