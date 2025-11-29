@class UIImage;

@interface TOActivityCroppedImageProvider : UIActivityItemProvider

@property (retain, nonatomic) UIImage *image;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropFrame;
@property (nonatomic) long long angle;
@property (nonatomic) BOOL circular;
@property (retain) UIImage *croppedImage;

- (id)initWithImage:(id)a0 cropFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 angle:(long long)a2 circular:(BOOL)a3;
- (id)item;
- (void).cxx_destruct;
- (id)activityViewControllerPlaceholderItem:(id)a0;
- (id)activityViewController:(id)a0 itemForActivityType:(id)a1;

@end
