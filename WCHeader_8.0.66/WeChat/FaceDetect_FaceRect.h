@interface FaceDetect_FaceRect : NSObject

@property (nonatomic) float originX;
@property (nonatomic) float originY;
@property (nonatomic) float width;
@property (nonatomic) float height;

- (id)initWithRect:(struct Rect { float x0; float x1; float x2; float x3; })a0;
- (id)initWithPara:(float)a0 withY:(float)a1 withWidth:(float)a2 withHeight:(float)a3;
- (id)wrapToDic;

@end
