@class UILabel, AWEAdFeedCommentFilterModel;

@interface AWEAdCommentFilterItemCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEAdFeedCommentFilterModel *filterModel;

+ (id)lableFontWithModel:(id)a0;
+ (id)lableTextWithModel:(id)a0;

- (void)configViews;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
