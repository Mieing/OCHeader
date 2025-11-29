@interface HmpImage : NSObject

@property (nonatomic) void *impl;
@property (nonatomic) BOOL own;

- (id)init:(id)a0 :(int)a1;
- (id)initFromPtr:(void *)a0 :(BOOL)a1;
- (id)init:(int)a0 :(int)a1 :(int)a2 :(int)a3 :(int)a4;
- (void)set_color_model:(id)a0;
- (id)color_model;
- (int)wdim;
- (int)hdim;
- (int)cdim;
- (int)nchannels;
- (id)crop:(int)a0 :(int)a1 :(int)a2 :(int)a3;
- (void *)unsafe_data;
- (id)copy_:(id)a0;
- (id)description;
- (id)select:(int)a0;
- (int)height;
- (int)width;
- (id)clone;
- (void *)ptr;
- (id)device;
- (void)dealloc;
- (id)data;
- (int)format;
- (int)dtype;
- (BOOL)defined;

@end
