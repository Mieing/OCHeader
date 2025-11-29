@class BDCastProxyRemuxerConfig, BDCastProxyRemuxerRemuxStatus, NSObject;
@protocol OS_dispatch_queue;

@interface BDCastProxyRemuxer : NSObject {
    void *_remuxer;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) BDCastProxyRemuxerConfig *config;
@property (nonatomic) double startDiscardPacketTime;
@property (readonly, nonatomic) BDCastProxyRemuxerRemuxStatus *remuxStatus;
@property (nonatomic) BOOL isDiscardingFrame;

- (void)startDiscardFrame;
- (void)stopDiscardFrame;
- (void)stopRemux;
- (void)etStartDiscardPacket;
- (void)etStopDiscardPacket:(BOOL)a0;
- (void)startRemux:(id /* block */)a0 remuxEndBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (void)addObserver;
- (id)initWithConfig:(id)a0;
- (void)dealloc;
- (void)didEnterBackground:(id)a0;

@end
