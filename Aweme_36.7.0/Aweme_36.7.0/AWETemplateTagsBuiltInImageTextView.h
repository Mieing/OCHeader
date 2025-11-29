@class UIColor, UIFont;

@interface AWETemplateTagsBuiltInImageTextView : AWETemplateTagsBuiltInBaseView

@property (retain, nonatomic) UIFont *textLabelFont;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) double imgSize;
@property (nonatomic) double imgRadius;
@property (nonatomic) BOOL imgRenderingModeAlwaysTemplate;

- (void)setupProperty;
- (id)elementViews:(id)a0;
- (double)bgHeight;
- (void).cxx_destruct;
- (double)imageSize;

@end
