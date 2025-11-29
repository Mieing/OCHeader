@class UIImageView, UILabel;

@interface AWENearbyOperationCollectionCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (nonatomic) BOOL isInFeedContainer;
@property (nonatomic) BOOL shouldOptimizeUI;

+ (id)p_descriptionWithModel:(id)a0;
+ (double)cellHeightForWidth:(double)a0 model:(id)a1 shouldOptimizeNearbyUI:(BOOL)a2;
+ (BOOL)p_shouldShowDesc;
+ (double)p_descInsetH;
+ (double)p_descLineSpacing;

- (void)configurationWithModel:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
