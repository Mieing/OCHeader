@interface BDASplashViewUtils : NSObject

@property (nonatomic) double scaling;
@property (nonatomic) double heightErrorRange;
@property (nonatomic) double widthErrorRange;

- (id)initWithResourceSize:(struct CGSize { double x0; double x1; })a0 targetViewSize:(struct CGSize { double x0; double x1; })a1;
- (struct CGSize { double x0; double x1; })getLocateSizeWithOriginalSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })getLocateCenterWithOriginalCenter:(struct CGPoint { double x0; double x1; })a0;

@end
