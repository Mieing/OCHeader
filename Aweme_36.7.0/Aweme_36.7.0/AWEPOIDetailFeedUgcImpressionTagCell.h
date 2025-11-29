@class AWEPOIUgcButtonSkinConfig, UIImageView, UILabel, UIView;

@interface AWEPOIDetailFeedUgcImpressionTagCell : UICollectionViewCell

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) UILabel *countLabel;
@property (nonatomic) BOOL setupUIInAB;
@property (retain, nonatomic) AWEPOIUgcButtonSkinConfig *buttonSkinConfig;
@property (nonatomic) BOOL ugcTagAB;

+ (struct CGSize { double x0; double x1; })sizeWithModel:(id)a0;
+ (struct CGSize { double x0; double x1; })sizeInABWithModel:(id)a0;

- (void)updateInABWithModel:(id)a0;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithModel:(id)a0;

@end
