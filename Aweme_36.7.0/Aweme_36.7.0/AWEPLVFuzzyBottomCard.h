@class NSString, AWEPadPolymericChannelCoverFavoriteTagView, UIImageView, AWEPLVCardCornerIconView, UIView, AWEGradientView, UILabel;

@interface AWEPLVFuzzyBottomCard : UICollectionViewCell <DUXGridBreakPointResponder>

@property (retain, nonatomic) UIView *coverContainerView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) AWEPadPolymericChannelCoverFavoriteTagView *tagView;
@property (retain, nonatomic) AWEPLVCardCornerIconView *cornerIcon;
@property (retain, nonatomic) AWEGradientView *coverTopInfoMaskView;
@property (retain, nonatomic) AWEGradientView *coverBottomInfoMaskView;
@property (retain, nonatomic) UILabel *coverSubInfoLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (nonatomic) double coverRatio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightWithCoverRatio:(double)a0 breakPoint:(long long)a1 cellWidth:(double)a2;

- (void)duxGrid_viewDidChangeBreakPointFrom:(struct { long long x0; long long x1; })a0 toBreakPoint:(struct { long long x0; long long x1; })a1;
- (void)duxGrid_superViewDidChangeBreakPointFrom:(struct { long long x0; long long x1; })a0 toBreakPoint:(struct { long long x0; long long x1; })a1;
- (void)updateTitle:(id)a0 subTitle:(id)a1 info:(id)a2;
- (void)updateCoverImageWithUrlArray:(id)a0 overlayEnable:(BOOL)a1 completion:(id /* block */)a2;
- (void)updateCornerIcon:(unsigned long long)a0;
- (void)updateViewWithBreakPoint:(struct { long long x0; long long x1; })a0;
- (void)updateCoverLayout;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupView;

@end
