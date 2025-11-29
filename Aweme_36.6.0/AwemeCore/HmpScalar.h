@interface HmpScalar : NSObject

@property (nonatomic) void *impl;
@property (nonatomic) BOOL own;

- (id)initFromPtr:(void *)a0 :(BOOL)a1;
- (id)initFromBool:(BOOL)a0;
- (id)initFromInt:(long long)a0;
- (id)initFromFloat:(double)a0;
- (BOOL)to_bool;
- (long long)to_int;
- (double)to_float;
- (BOOL)is_integral:(BOOL)a0;
- (BOOL)is_floating_point;
- (BOOL)is_boolean;
- (id)init;
- (void *)ptr;
- (void)dealloc;

@end
