@interface BmfTask : NSObject

@property (nonatomic) void *p;
@property (nonatomic) BOOL own;

- (id)initFromPtr:(void *)a0 own:(BOOL)a1;
- (id)init:(int)a0 istream_ids:(id)a1 ostream_ids:(id)a2;
- (BOOL)fillInputPacket:(int)a0 pkt:(id)a1;
- (BOOL)fillOutputPacket:(int)a0 pkt:(id)a1;
- (id)popPacketFromOutQueue:(int)a0;
- (id)popPacketFromInQueue:(int)a0;
- (id)getInputStreamIds;
- (id)getOutputStreamIds;
- (long long)timestamp;
- (void)setTimestamp:(long long)a0;
- (void *)ptr;
- (void)dealloc;

@end
