@class UIImageView, UILabel, UIView;

@interface IESLiveGuideCoverSelectPanelCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *statusLabel;
@property (retain, nonatomic) UIView *blurView;

- (void)updateWithAiCover:(id)a0;
- (void)selectCell:(BOOL)a0;
- (id)applyGaussianBlurToImage:(id)a0 withRadius:(double)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
