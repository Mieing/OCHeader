@interface IESMMARPose : NSObject <NSCopying>

@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } transform;

+ (id)identity;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;

@end
