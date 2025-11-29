@class UILabel, UIImageView;

@interface AWEIMUITagLabelView : UIView

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) struct CGSize { double width; double height; } size;

- (void)configWithModel:(id)a0;
- (void).cxx_destruct;

@end
