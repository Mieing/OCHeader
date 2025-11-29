@class UIImageView, AWEPublishTagRecommendStyleInfo, UILabel, AWEVideoInputSuggestionModel;

@interface AWEVideoNewPublishTagRecommendItemCell : UICollectionViewCell

@property (retain, nonatomic) AWEPublishTagRecommendStyleInfo *styleInfo;
@property (nonatomic) unsigned long long tagStyle;
@property (retain, nonatomic) AWEVideoInputSuggestionModel *model;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIImageView *tagImageView;

- (void)configWithModel:(id)a0;
- (void)setHashTagType:(unsigned long long)a0;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
