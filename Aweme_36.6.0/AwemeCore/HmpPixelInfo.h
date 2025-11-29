@interface HmpPixelInfo : NSObject

@property (nonatomic) void *impl;
@property (nonatomic) BOOL own;

- (id)initFromPtr:(void *)a0 :(BOOL)a1;
- (int)primaries;
- (int)transfer_characteristic;
- (id)initEx:(int)a0 :(id)a1;
- (int)infer_space;
- (BOOL)is_rgbx;
- (id)init:(int)a0;
- (int)range;
- (void *)ptr;
- (void)dealloc;
- (int)format;
- (int)space;

@end
