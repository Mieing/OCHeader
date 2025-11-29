@interface HmpFrame : NSObject

@property (nonatomic) void *impl;
@property (nonatomic) BOOL own;
@property (nonatomic) struct __CVBuffer { } *buffer;

+ (id)from_image:(id)a0 :(id)a1;

- (id)init:(int)a0 :(int)a1 :(id)a2;
- (id)initFromPtr:(void *)a0 :(BOOL)a1;
- (id)crop:(int)a0 :(int)a1 :(int)a2 :(int)a3;
- (id)initFromPixelBuffer:(struct __CVBuffer { } *)a0;
- (id)pix_info;
- (long long)nplanes;
- (id)plane:(int)a0;
- (void *)plane_data:(int)a0;
- (id)to_image:(int)a0;
- (id)copy_:(id)a0;
- (id)description;
- (int)height;
- (int)width;
- (void *)ptr;
- (id)device;
- (void)dealloc;
- (int)format;
- (int)dtype;
- (BOOL)defined;

@end
