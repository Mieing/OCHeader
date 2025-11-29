@class SkityImage;

@interface SkityTextAttachment : NSObject

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (readonly, nonatomic) SkityImage *image;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;

- (id)initWithImage:(id)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void).cxx_destruct;
- (void)updatePosition:(double)a0;

@end
