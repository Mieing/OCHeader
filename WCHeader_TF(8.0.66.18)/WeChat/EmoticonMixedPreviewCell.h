@class UIImageView, UIView, UILabel, MMWebImageView;

@interface EmoticonMixedPreviewCell : UICollectionViewCell

@property (retain, nonatomic) MMWebImageView *webImageView;
@property (retain, nonatomic) UIView *packHintView;
@property (retain, nonatomic) UILabel *packHintLabel;
@property (retain, nonatomic) UIView *moreView;
@property (retain, nonatomic) UIImageView *moreImg;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)updateWithEmojiInfo:(id)a0;
- (void)updateWithEmojiSummary:(id)a0;
- (void)updateForMore;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;

@end
