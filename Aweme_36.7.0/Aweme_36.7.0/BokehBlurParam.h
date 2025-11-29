@interface BokehBlurParam : NSObject

@property (nonatomic) float width;
@property (nonatomic) float height;
@property (nonatomic) float angle;
@property (nonatomic) float radius;
@property (nonatomic) float brightness;

- (float)getPower;
- (id)getVector1;
- (id)getVector2;
- (id)getVector3;
- (id)init;

@end
