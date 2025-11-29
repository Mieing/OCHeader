@interface QGPColor : QGPBaseModel

@property (nonatomic) double r;
@property (nonatomic) double g;
@property (nonatomic) double b;

- (id)toUIColor;

@end
