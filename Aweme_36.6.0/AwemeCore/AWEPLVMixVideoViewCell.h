@class AWEPadPolymericChannelCoverFavoriteTagView, UIImageView, AWEGradientView, UIView, AWEPlVMultiInfoView;

@interface AWEPLVMixVideoViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) AWEGradientView *coverTopInfoMaskView;
@property (retain, nonatomic) AWEPadPolymericChannelCoverFavoriteTagView *tagView;
@property (retain, nonatomic) AWEPlVMultiInfoView *infoView;

- (void)duxGrid_viewDidChangeBreakPointFrom:(struct { long long x0; long long x1; })a0 toBreakPoint:(struct { long long x0; long long x1; })a1;
- (void)duxGrid_superViewDidChangeBreakPointFrom:(struct { long long x0; long long x1; })a0 toBreakPoint:(struct { long long x0; long long x1; })a1;
- (void)updateViewForBreakPoint:(struct { long long x0; long long x1; })a0;
- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupView;

@end
