@class DUXBaseLabel, DUXBaseImageView;

@interface CAKAlbumInsightItemCell : UICollectionViewCell

@property (retain, nonatomic) DUXBaseImageView *imageView;
@property (retain, nonatomic) DUXBaseLabel *titleLabel;

+ (struct CGSize { double x0; double x1; })sizeForModel:(id)a0;
+ (struct CGSize { double x0; double x1; })sizeForAIMemoriesInsightItem;

- (void)configWithModel:(id)a0;
- (void)configWithAIMemoriesInsightItem:(id)a0;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
