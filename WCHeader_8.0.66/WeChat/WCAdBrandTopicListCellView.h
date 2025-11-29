@class WCAdBrandSingleTopicInfo, UIImageView, UIView, WCAdURLImageView;

@interface WCAdBrandTopicListCellView : UICollectionViewCell

@property (nonatomic) unsigned long long index;
@property (retain, nonatomic) WCAdBrandSingleTopicInfo *topicInfo;
@property (nonatomic) double topicCornerRadius;
@property (retain, nonatomic) WCAdURLImageView *topicImageView;
@property (retain, nonatomic) WCAdURLImageView *bottomImageView;
@property (retain, nonatomic) UIView *highlightTopicCoverView;
@property (retain, nonatomic) UIImageView *highlightBottomCoverView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void)updateItemWithIndex:(unsigned long long)a0 topicInfo:(id)a1 cornerRadius:(double)a2;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;

@end
