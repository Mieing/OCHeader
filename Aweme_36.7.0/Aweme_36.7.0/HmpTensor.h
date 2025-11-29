@interface HmpTensor : NSObject

@property (nonatomic) void *impl;
@property (nonatomic) BOOL own;

+ (id)empty:(id)a0 DType:(int)a1 Device:(id)a2 Pinned:(BOOL)a3;
+ (id)fromfile:(id)a0 :(int)a1 :(long long)a2 :(long long)a3;
+ (id)from_buffer:(void *)a0 :(id)a1 :(int)a2 :(id)a3 :(id)a4;

- (id)initFromPtr:(void *)a0 :(BOOL)a1;
- (id)as_strided:(id)a0 :(id)a1 :(long long)a2;
- (id)permute:(id)a0;
- (id)slice:(long long)a0 :(long long)a1 :(long long)a2 :(long long)a3;
- (id)select:(long long)a0 :(long long)a1;
- (id)reshape:(id)a0;
- (long long)device_index;
- (long long)stride:(long long)a0;
- (long long)nbytes;
- (long long)itemsize;
- (long long)nitems;
- (BOOL)is_contiguous;
- (void *)unsafe_data;
- (id)fill_:(id)a0;
- (id)copy_:(id)a0;
- (void)tofile:(id)a0;
- (id)strides;
- (id)shape;
- (id)description;
- (id)view:(id)a0;
- (id)clone;
- (void *)ptr;
- (id)alias;
- (void)dealloc;
- (int)device_type;
- (long long)dim;
- (id)contiguous;
- (long long)size:(long long)a0;
- (int)dtype;
- (BOOL)defined;

@end
