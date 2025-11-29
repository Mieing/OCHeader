@interface VEGeometryDesc : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) int size;
@property (readonly, nonatomic) const float *data;

- (id)initGeometryType:(long long)a0 data:(const float *)a1 size:(int)a2;

@end
