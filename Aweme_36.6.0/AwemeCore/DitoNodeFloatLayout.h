@interface DitoNodeFloatLayout : DitoNodeLayout

@property (nonatomic) double initialPageviewOriginY;
@property (nonatomic) BOOL hasBeenInitedPageview;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } floatContainerBounds;
@property (nonatomic) double halfContainerInitialRatio;
@property (nonatomic) unsigned long long halfContainerType;

- (void)nodeDidLayout;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })displayFrameWithNodeSize:(struct CGSize { double x0; double x1; })a0 floatGravity:(unsigned long long)a1 isScroll:(BOOL)a2;
- (BOOL)isStickyFloat:(BOOL)a0;

@end
