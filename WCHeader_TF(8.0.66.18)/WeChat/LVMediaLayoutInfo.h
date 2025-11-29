@interface LVMediaLayoutInfo : NSObject

@property (nonatomic) BOOL shouldScaling;
@property (nonatomic) struct CGSize { double width; double height; } originMediaSize;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } cropInsets;
@property (nonatomic) struct CGSize { double width; double height; } containerSize;
@property (nonatomic) struct CGSize { double width; double height; } cropSize;
@property (nonatomic) struct CGSize { double width; double height; } fullSize;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } fullMarginInsets;

+ (struct WCShowArea { double x0; double x1; double x2; double x3; })playerShowAreaForContainerSize:(struct CGSize { double x0; double x1; })a0 originMediaSize:(struct CGSize { double x0; double x1; })a1 cropInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;

- (void)configFrameForContainer:(id)a0 imageCropContainer:(id)a1 imageView:(id)a2;
- (struct WCShowArea { double x0; double x1; double x2; double x3; })playerShowAreaForContainer:(struct CGSize { double x0; double x1; })a0;

@end
