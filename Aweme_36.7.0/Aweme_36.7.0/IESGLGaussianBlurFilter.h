@interface IESGLGaussianBlurFilter : HTSGLFilter

@property (nonatomic) double radius;
@property (nonatomic) double width;
@property (nonatomic) double height;

- (void)initializeRenderer:(id)a0;
- (id)initWithContext:(id)a0;

@end
