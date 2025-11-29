@interface TOCroppedImageAttributes : NSObject

@property (nonatomic) long long angle;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } croppedFrame;
@property (nonatomic) struct CGSize { double width; double height; } originalImageSize;

- (id)initWithCroppedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 angle:(long long)a1 originalImageSize:(struct CGSize { double x0; double x1; })a2;

@end
