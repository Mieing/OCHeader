@class EmotionActivity, UIImageView, MMWebImageView, MMUILabel;

@interface RelatedEmoticonActivityCell : EmoticonCellLikeButton

@property (retain, nonatomic) MMUILabel *mainLabel;
@property (retain, nonatomic) MMWebImageView *iconImageView;
@property (retain, nonatomic) MMUILabel *nameLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) EmotionActivity *activity;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)updateLayout;
- (void).cxx_destruct;

@end
