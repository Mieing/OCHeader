@class UIImageView, UILabel, UIFont;

@interface AWEFeedCapsuleView : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIFont *titleFont;
@property (nonatomic) unsigned long long style;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) BOOL titleShadowDisabled;

- (void)resetWithTitle:(id)a0 image:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)resetUI;

@end
