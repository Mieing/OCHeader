@interface BmfPacket : NSObject

@property (nonatomic) void *p;
@property (nonatomic) BOOL own;

+ (id)generateEosPacket;
+ (id)generateEofPacket;

- (id)initFromPtr:(void *)a0 own:(BOOL)a1;
- (BOOL)is:(Class)a0;
- (id)init:(id)a0;
- (long long)timestamp;
- (void)setTimestamp:(long long)a0;
- (void *)ptr;
- (id)get:(Class)a0;
- (void)dealloc;
- (BOOL)defined;

@end
