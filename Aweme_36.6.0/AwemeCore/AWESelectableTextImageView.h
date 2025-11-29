@class UIColor, UIFont, UIImage, AWEURLModel;

@interface AWESelectableTextImageView : AWETextImageView

@property (nonatomic) BOOL selected;
@property (retain, nonatomic) UIColor *selectedTextColor;
@property (retain, nonatomic) UIFont *selectedTextFont;
@property (retain, nonatomic) UIColor *originBackgroundColor;
@property (retain, nonatomic) UIColor *selectedBackgroundColor;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (retain, nonatomic) AWEURLModel *imageUrl;
@property (retain, nonatomic) AWEURLModel *selectedImageUrl;
@property (retain, nonatomic) UIImage *selectedImage;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) UIColor *originBorderColor;
@property (retain, nonatomic) UIColor *selectedBorderColor;

- (struct CGSize { double x0; double x1; })p_imageContentSize;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
