@class UIImageView, DVESegmentClipBorderView;

@interface ACCCropEditorThumbnailCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) DVESegmentClipBorderView *borderView;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } time;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)showCellBorder:(BOOL)a0;

@end
