@class UILabel, UIImageView;

@interface AWEPLVCinemaVajraCardV2 : UICollectionViewCell

@property (retain, nonatomic) UILabel *topicLabel;
@property (retain, nonatomic) UIImageView *topicIcon;
@property (nonatomic) long long cardType;

- (void)duxGrid_viewDidChangeBreakPointFrom:(struct { long long x0; long long x1; })a0 toBreakPoint:(struct { long long x0; long long x1; })a1;
- (void)duxGrid_superViewDidChangeBreakPointFrom:(struct { long long x0; long long x1; })a0 toBreakPoint:(struct { long long x0; long long x1; })a1;
- (void)updateViewForBreakPoint:(struct { long long x0; long long x1; })a0;
- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupView;

@end
