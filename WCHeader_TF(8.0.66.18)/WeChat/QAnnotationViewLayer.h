@interface QAnnotationViewLayer : CALayer

@property (nonatomic) struct CGPoint { double x0; double x1; } coordinate;

+ (BOOL)needsDisplayForKey:(id)a0;

- (id)annotationView;
- (void)display;
- (id)initWithLayer:(id)a0;

@end
