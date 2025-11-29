@interface OMJCamSpatialDesc : NSObject

@property (readonly, nonatomic) struct CGSize { double width; double height; } viewPointSize;
@property (nonatomic) unsigned long long scaleMode;
@property (nonatomic) unsigned long long rotationMode;
@property (nonatomic) unsigned long long flipMode;
@property (nonatomic) float scale;
@property (nonatomic) struct CGPoint { double x; double y; } position;

- (id)initWithSpatialDesc:(id)a0;
- (id)initWithBackingDesc:(const void *)a0;
- (id)description;

@end
