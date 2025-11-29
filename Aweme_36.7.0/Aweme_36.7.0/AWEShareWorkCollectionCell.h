@class UIImageView, AWEAwemeModel, UILabel, AWEGradientView, UIView;

@interface AWEShareWorkCollectionCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) AWEGradientView *maskLayer;
@property (retain, nonatomic) UIImageView *noSelectedImageView;
@property (retain, nonatomic) UILabel *selectedNumberLabel;
@property (retain, nonatomic) UIView *disableSelectMakeView;
@property (nonatomic) double imageRequestSentinel;
@property (nonatomic) BOOL disableSelectIcon;
@property (nonatomic) BOOL awemeSelected;
@property (nonatomic) long long awemeSelectedIndex;
@property (nonatomic) BOOL canSelected;

- (void)configWithModel:(id)a0 type:(long long)a1;
- (void)p_updateCoverWithCompletion:(id /* block */)a0;
- (BOOL)p_shouldUseDynamicCover:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
