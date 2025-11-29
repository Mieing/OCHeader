@class MMUIButton, MMWebImageView, UILabel, UIView;

@interface GameVideoGalleryCell : UICollectionViewCell {
    UIView *_bottomView;
    MMWebImageView *_imageView;
    UILabel *_titleView;
    UILabel *_subtitleView;
    UIView *_vertDividerView;
    UIView *_tagViewContainer;
    MMUIButton *_videoTypeView;
    UIView *_horiDividerView;
    id _cellData;
    id /* block */ _videoTypeAction;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupGameVideoGalleryCell;
- (void)updateLayout:(double)a0;
- (void)renderWithCellData:(id)a0 videoTypeAction:(id /* block */)a1 extraBottomHeight:(double)a2;
- (void)updateVideoTypeState:(BOOL)a0;
- (void)clickVideoType;
- (void)renderTagViews:(id)a0;
- (void).cxx_destruct;

@end
