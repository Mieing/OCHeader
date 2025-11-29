@interface HmpColorModel : NSObject

@property (nonatomic) void *impl;
@property (nonatomic) BOOL own;

- (id)init:(int)a0 :(int)a1;
- (id)initFromPtr:(void *)a0 :(BOOL)a1;
- (id)initEx:(int)a0 :(int)a1 :(int)a2 :(int)a3;
- (int)primaries;
- (int)transfer_characteristic;
- (int)range;
- (void *)ptr;
- (void)dealloc;
- (int)space;

@end
