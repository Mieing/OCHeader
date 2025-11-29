@class UIView;

@interface ACCImageAlbumEditPlayerItemCell : UICollectionViewCell

@property (weak, nonatomic) UIView *previewView;

- (void)reloadWithPreviewView:(id)a0;
- (void)reloadCurrentPreviewViewIfNeed;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
