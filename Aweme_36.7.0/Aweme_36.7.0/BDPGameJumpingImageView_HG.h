@class BDPGameJumpingModel_HG, BDPGameJumpingView_HG;

@interface BDPGameJumpingImageView_HG : UIImageView

@property (retain, nonatomic) BDPGameJumpingModel_HG *model;
@property (nonatomic) unsigned long long indexInView;
@property (weak, nonatomic) BDPGameJumpingView_HG *gameJumpingView;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onTap;

@end
