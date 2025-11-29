@class MMWebImageView, FinderShopShelfLabelClassifyInfo, MMUILabel;

@interface MMFinderLiveShopShelfClassifyCell : UICollectionViewCell

@property (retain, nonatomic) FinderShopShelfLabelClassifyInfo *info;
@property (retain, nonatomic) MMUILabel *classifyLabel;
@property (retain, nonatomic) MMWebImageView *iconView;

+ (id)cellIdentifier;
+ (id)normalFont;
+ (id)selectedFont;
+ (struct CGSize { double x0; double x1; })iconSize;
+ (double)spacing;
+ (struct CGSize { double x0; double x1; })cellSizeWithInfo:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initViews;
- (void)layoutSubviews;
- (void)updateWithClassifyInfo:(id)a0;
- (void)updateWithIsChosen:(BOOL)a0;
- (void).cxx_destruct;

@end
