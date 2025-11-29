@class UIImageView, AWEPOIDetailMoreOptionItemModel, UIView, UILabel;

@interface AWEPOIDetailMoreOptionItemView : UIView

@property (retain, nonatomic) AWEPOIDetailMoreOptionItemModel *item;
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
