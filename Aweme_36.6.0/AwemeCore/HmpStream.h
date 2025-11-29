@interface HmpStream : NSObject

@property (nonatomic) void *impl;
@property (nonatomic) BOOL own;

+ (void)set_current:(id)a0;
+ (id)current:(int)a0;
+ (id)create:(int)a0 Flags:(unsigned long long)a1;

- (id)initFromPtr:(void *)a0 :(BOOL)a1;
- (void)synchronize;
- (BOOL)query;
- (void *)ptr;
- (id)device;
- (BOOL)isEqual:(id)a0;
- (void)dealloc;

@end
