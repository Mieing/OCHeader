@interface LynxScreenMetrics : NSObject

@property (nonatomic) struct CGSize { double width; double height; } screenSize;
@property (nonatomic) double scale;

+ (id)getDefaultLynxScreenMetrics;

- (void)setLynxScreenSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithScreenSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (id)init;

@end
