@class TextStatePublishOfficialIconItem, MMUILabel, MMWebImageView;

@interface TextStatePublishOfficialIconItemView : UICollectionViewCell

@property (retain, nonatomic) MMWebImageView *iconImageView;
@property (retain, nonatomic) MMUILabel *descriptionLabel;
@property (retain, nonatomic) TextStatePublishOfficialIconItem *iconItem;

+ (double)itemWidth;
+ (double)minItemHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;

@end
