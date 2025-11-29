@interface NLEImageTransform : NSObject

@property (nonatomic) struct CGPoint { double x; double y; } translate;
@property (nonatomic) struct CGPoint { double x; double y; } scale;
@property (nonatomic) double rotate;

@end
