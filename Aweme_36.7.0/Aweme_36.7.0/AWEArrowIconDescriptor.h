@interface AWEArrowIconDescriptor : AWEGraphicsIconDescriptor

@property (nonatomic) double angle;
@property (nonatomic) double radius;
@property (nonatomic) double lineWidth;
@property (nonatomic) double rotation;
@property (nonatomic) double tailLength;

- (id)createLayer;
- (id)init;

@end
