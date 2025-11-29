@interface BmfVideoFrame : NSObject

@property (nonatomic) void *p;
@property (nonatomic) BOOL own;

- (id)initFromPtr:(void *)a0 own:(BOOL)a1;
- (id)initFromImage:(id)a0;
- (id)initFromFrame:(id)a0;
- (id)init:(int)a0 height:(int)a1 channels:(int)a2 format:(int)a3 dtype:(int)a4 device:(char *)a5 pinned_memory:(BOOL)a6;
- (id)init:(int)a0 height:(int)a1 pix_info:(id)a2 device:(char *)a3;
- (id)toImage:(int)a0 contiguous:(BOOL)a1;
- (id)toFrame:(id)a0;
- (id)toDevice:(char *)a0 non_blocking:(BOOL)a1;
- (id)toDtype:(int)a0;
- (void)copyProps:(id)a0;
- (void)PrivateMerge:(id)a0;
- (id)PrivateGet:(int)a0;
- (void)PrivateAttach:(int)a0 option:(id)a1;
- (BOOL)Ready;
- (void)Record:(BOOL)a0;
- (void)Synchronize;
- (long long)pts;
- (int)deviceType;
- (BOOL)isImage;
- (int)height;
- (int)width;
- (id)frame;
- (void *)ptr;
- (id)image;
- (void)dealloc;
- (void)setTimeBase:(id)a0;
- (id)timeBase;
- (void)copyFrom:(id)a0;
- (int)dtype;
- (int)deviceIndex;
- (BOOL)defined;
- (void)setPts:(long long)a0;

@end
