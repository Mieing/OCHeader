@class ReplayKitEncoderStats, TXCMediaStreamIPCTunnelServer, NSMutableDictionary, TXCDarwinNotificationCenter, NSString, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface TXReplayKitApp : NSObject <TXCMediaStreamIPCTunnelServerDelegate> {
    struct EncodeParamsTypeHeader { unsigned short is_annexb; unsigned short rc_method; unsigned int width; unsigned int height; unsigned int framerate; unsigned int bitrate; unsigned int gop; unsigned int screen_encoding_aspect_ratio; } _replaykitEncodeParmas;
    unsigned int _encodedFrameCount;
    unsigned int _encodedWidth;
    unsigned int _encodedHeight;
    unsigned int _encodeDataLengthInBits;
    struct unique_ptr<liteav::Throtter, std::default_delete<liteav::Throtter>> { struct __compressed_pair<liteav::Throtter *, std::default_delete<liteav::Throtter>> { struct Throtter *__value_; } __ptr_; } _stats_throtter;
    unsigned int _last_request_keyframe_ts_ms;
}

@property (retain, nonatomic) NSMutableDictionary *delegateTable;
@property (retain, nonatomic) TXCMediaStreamIPCTunnelServer *server;
@property (retain, nonatomic) TXCDarwinNotificationCenter *center;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *outputQueue;
@property (retain, nonatomic) ReplayKitEncoderStats *replayKitEncoderStats;
@property (retain, nonatomic) NSMutableArray *seiList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)removeObserver;
- (void)setupObserver;
- (void)startWithAppGroup:(id)a0;
- (void)stop;
- (void)pause;
- (void)resume;
- (void)updateEncoderParams:(struct EncodeParamsTypeHeader { unsigned short x0; unsigned short x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; })a0;
- (void)requestIFrame;
- (void)addDelegateWithKey:(id)a0 delegate:(id)a1;
- (void)removeDelegateWithKey:(id)a0;
- (void)setCoverImage:(struct CoverImageTypeHeader { int x0; unsigned int x1; unsigned int x2; unsigned int x3; })a0 ImageData:(struct vector<unsigned char, std::allocator<unsigned char>> { char *x0; char *x1; struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { char *x0; } x2; })a1;
- (void)addSei:(const void *)a0 payloadType:(int)a1 repeatTimes:(int)a2;
- (void)bindSeiNaluToPacket:(void *)a0;
- (void)onReceiveVideoPacket:(struct unique_ptr<liteav::replayKit::IPCTunnelPacket<liteav::replayKit::VideoTypeHeader>, std::default_delete<liteav::replayKit::IPCTunnelPacket<liteav::replayKit::VideoTypeHeader>>> { struct __compressed_pair<liteav::replayKit::IPCTunnelPacket<liteav::replayKit::VideoTypeHeader> *, std::default_delete<liteav::replayKit::IPCTunnelPacket<liteav::replayKit::VideoTypeHeader>>> { void *x0; } x0; })a0;
- (void)onReceiveAudioPacket:(struct unique_ptr<liteav::replayKit::IPCTunnelPacket<liteav::replayKit::AudioTypeHeader>, std::default_delete<liteav::replayKit::IPCTunnelPacket<liteav::replayKit::AudioTypeHeader>>> { struct __compressed_pair<liteav::replayKit::IPCTunnelPacket<liteav::replayKit::AudioTypeHeader> *, std::default_delete<liteav::replayKit::IPCTunnelPacket<liteav::replayKit::AudioTypeHeader>>> { void *x0; } x0; })a0;
- (void)onConnected;
- (void)onDisconnected;
- (id)GetEncoderStats;
- (void)accumulateStatsData:(void *)a0;
- (void)updateEncoderStats;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
