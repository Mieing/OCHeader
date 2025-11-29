@class IESLiveAnimatedImageView, NSString, UIView;

@interface IESLiveAnimatedTextAttachment : NSTextAttachment

@property (weak, nonatomic) IESLiveAnimatedImageView *imageView;
@property (nonatomic) BOOL isAnimated;
@property (copy, nonatomic) NSString *imageUrl;
@property (weak, nonatomic) UIView *containerView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } textContainerInset;
@property (nonatomic) double alignFontSize;
@property (nonatomic) BOOL adjustImageViewFrame;

- (void).cxx_destruct;
- (id)imageForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1 characterIndex:(unsigned long long)a2;

@end
