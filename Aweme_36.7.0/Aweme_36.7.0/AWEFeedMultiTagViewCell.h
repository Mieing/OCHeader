@class UILabel, AWEDynamicLabel;

@interface AWEFeedMultiTagViewCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) AWEDynamicLabel *dynamicLabel;

+ (double)fontSizeWithLargeFontAdapted;
+ (id)dynamicLabelInfoFont;
+ (double)cellHeightWithLargeFontAdapted;
+ (id)identifier;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configureWithModel:(id)a0;

@end
