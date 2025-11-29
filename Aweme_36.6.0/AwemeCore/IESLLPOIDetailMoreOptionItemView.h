@class UIImageView, UIView, IESLLPOIDetailMoreOptionItemModel, UILabel;

@interface IESLLPOIDetailMoreOptionItemView : UIView

@property (retain, nonatomic) IESLLPOIDetailMoreOptionItemModel *item;
@property (retain, nonatomic) UIView *separator;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;

- (id)accessibilityLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithItem:(id)a0;
- (void)setupViews;
- (void)hideSeparator;

@end
