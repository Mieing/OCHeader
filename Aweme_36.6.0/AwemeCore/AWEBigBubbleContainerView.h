@class UILabel, AWEHomePageBubbleBigLabelContentConfig, BDImageView;

@interface AWEBigBubbleContainerView : UIView

@property (retain, nonatomic) BDImageView *leftIcon;
@property (retain, nonatomic) UILabel *popoverLabel;
@property (nonatomic) double intrinsicContentSizeWidth;
@property (retain, nonatomic) AWEHomePageBubbleBigLabelContentConfig *config;

- (void)setupUIWithConfig:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
