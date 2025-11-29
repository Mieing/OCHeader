@interface HmpDevice : NSObject

@property (nonatomic) void *impl;
@property (nonatomic) BOOL own;

+ (void)set_current:(id)a0;
+ (int)current:(int)a0;
+ (long long)count:(int)a0;

- (id)initFromString:(id)a0;
- (id)initFromPtr:(void *)a0 :(BOOL)a1;
- (int)index;
- (id)description;
- (id)init;
- (int)type;
- (void *)ptr;
- (void)dealloc;

@end
