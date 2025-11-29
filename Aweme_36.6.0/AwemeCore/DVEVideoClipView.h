@class CAGradientLayer, UICollectionView, DVEVideoClipRangeSelectView, UIView;
@protocol DVEVideoClipEditDelegate;

@interface DVEVideoClipView : UIView

@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UIView *gradientView;
@property (retain, nonatomic) DVEVideoClipRangeSelectView *rangeSelectView;
@property (retain, nonatomic) UICollectionView *slotCollectionView;
@property (weak, nonatomic) id<DVEVideoClipEditDelegate> editDelegate;

- (void)updateClipRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 slot:(id)a1;
- (void)setupRangeSelectViewWithSlot:(id)a0 thumbnailManager:(id)a1;
- (void)updateGradientViewForUpgrades;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)setupUI;

@end
