@class UITapGestureRecognizer, NSString, UIImageView, UILabel, IESECColor, UIView;

@interface IESECGoodsFeedTagView : UIControl {
    UIView *_contentView;
    UIImageView *_imageView;
    UILabel *_textLabel;
    UIImageView *_disclosureView;
    UITapGestureRecognizer *_tapGesture;
}

@property (copy, nonatomic) NSString *tagID;
@property (retain, nonatomic) IESECColor *background;
@property (readonly, nonatomic) UIImageView *imageView;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (readonly, nonatomic) UILabel *textLabel;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) IESECColor *borderColor;
@property (nonatomic) double spacing;
@property (nonatomic) BOOL showDisclosure;

- (void)tagViewDidClick:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupSubviews;

@end
