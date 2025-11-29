@interface BoundingBox : IESLivePBBaseMessage

@property (nonatomic) int xmin;
@property (nonatomic) int ymin;
@property (nonatomic) int width;
@property (nonatomic) int height;

+ (id)descriptor;

@end
