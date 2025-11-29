@class UIImageView, AWELiveShelfMoreOptionItem, UILabel;

@interface AWELiveShelfMoreOptionItemView : UIView

@property (retain, nonatomic) AWELiveShelfMoreOptionItem *item;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;

- (id)accessibilityLabel;
- (void).cxx_destruct;
- (id)initWithItem:(id)a0;
- (void)setupViews;

@end
