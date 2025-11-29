@interface IESTransformParams : NSObject

@property (nonatomic) unsigned long long fillMode;
@property (nonatomic) double scale;
@property (nonatomic) double rotateAngle;
@property (nonatomic) double translateX;
@property (nonatomic) double translateY;
@property (nonatomic) BOOL filpX;
@property (nonatomic) BOOL filpY;

- (id)init;

@end
