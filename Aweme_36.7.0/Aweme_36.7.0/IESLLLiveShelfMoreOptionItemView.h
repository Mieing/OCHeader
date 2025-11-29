@class IESLLLiveShelfMoreOptionItem, UIImageView, UILabel;

@interface IESLLLiveShelfMoreOptionItemView : UIView

@property (retain, nonatomic) IESLLLiveShelfMoreOptionItem *item;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;

- (id)accessibilityLabel;
- (void).cxx_destruct;
- (id)initWithItem:(id)a0;
- (void)setupViews;
- (void)tapGesture:(id)a0;

@end
