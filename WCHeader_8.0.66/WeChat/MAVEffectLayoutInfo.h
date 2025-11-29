@interface MAVEffectLayoutInfo : NSObject

@property (nonatomic) int centerX;
@property (nonatomic) int centerY;
@property (nonatomic) float scale;
@property (nonatomic) float rotate;

- (id)initWithCenterX:(int)a0 centerY:(int)a1;
- (id)initWithCenterX:(int)a0 centerY:(int)a1 scale:(float)a2;
- (id)initWithCenterX:(int)a0 centerY:(int)a1 scale:(float)a2 rotate:(float)a3;

@end
