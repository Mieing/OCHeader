@class UIView, CAShapeLayer, UILabel, MMWebImageView, MMMusicMVTrackItem;

@interface MMMusicMVPreviewEpisodeSelectCell : UICollectionViewCell

@property (retain, nonatomic) MMWebImageView *imageView;
@property (retain, nonatomic) UILabel *durationLabel;
@property (retain, nonatomic) MMMusicMVTrackItem *trackItem;
@property (retain, nonatomic) CAShapeLayer *borderLayer;
@property (retain, nonatomic) UIView *maskLayerView;
@property (nonatomic) unsigned int maskLayerViewAnimationDuration;
@property (nonatomic) BOOL isDoingAnimation;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)a0;
- (void)startMaskLayerViewAnimation;
- (void).cxx_destruct;

@end
