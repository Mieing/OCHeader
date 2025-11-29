@protocol CGRTCRoom, CGItem, CGDataChannel, CGCloudPlayer;

@interface CGMatchObject : NSObject

@property (weak, nonatomic) id<CGItem> item;
@property (weak, nonatomic) id<CGCloudPlayer> cloudPlayer;
@property (weak, nonatomic) id<CGRTCRoom> room;
@property (weak, nonatomic) id<CGDataChannel> dataChannel;

+ (unsigned long long)shouldLoadByItem:(id)a0 cloudPlayer:(id)a1;

- (id)initWithItem:(id)a0 cloudPlayer:(id)a1 room:(id)a2 dataChannel:(id)a3;
- (void).cxx_destruct;

@end
