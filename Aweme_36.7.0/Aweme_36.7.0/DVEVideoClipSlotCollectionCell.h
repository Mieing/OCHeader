@class UIImageView, UIImage, UILabel, DVESegmentClipBorderView;

@interface DVEVideoClipSlotCollectionCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) DVESegmentClipBorderView *borderView;
@property (retain, nonatomic) UIImage *cover;

- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
