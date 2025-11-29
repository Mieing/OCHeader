@class UILabel, BDSCImageView, BDSCGradientView;

@interface BDSCFailVideoActionButton : UIButton

@property (retain, nonatomic) UILabel *sc_titleLabel;
@property (retain, nonatomic) BDSCImageView *sc_imageView;
@property (retain, nonatomic) BDSCGradientView *gradientView;
@property (nonatomic) BOOL isBigStyle;

- (id)initWithBigStyle:(BOOL)a0 imageName:(id)a1 text:(id)a2;
- (void)updateGreyActionMode:(BOOL)a0;
- (void).cxx_destruct;
- (void)rebuildConstraints;

@end
