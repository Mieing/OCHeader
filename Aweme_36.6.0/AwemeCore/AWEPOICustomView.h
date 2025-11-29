@interface AWEPOICustomView : UIView

@property (nonatomic) struct CGSize { double width; double height; } preSize;
@property (nonatomic) struct CGSize { double width; double height; } custom_intrinsicContentSize;
@property (copy, nonatomic) id /* block */ layoutSubviewsCallback;
@property (copy, nonatomic) id /* block */ sizeDidChangeCallback;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
