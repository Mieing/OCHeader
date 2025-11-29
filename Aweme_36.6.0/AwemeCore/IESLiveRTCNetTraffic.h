@interface IESLiveRTCNetTraffic : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (nonatomic) double remoteVideNetTraffic;
@property (nonatomic) double localVideNetTraffic;
@property (nonatomic) double localAudioNetTraffic;
@property (nonatomic) double remoteAudioNetTraffic;

- (void)addRemoteVideoReceiveKBitrate:(double)a0;
- (void)addRemoteAudioReceivedKBitrate:(double)a0;
- (void)addLocalVideoSentKBitrate:(double)a0;
- (void)addLocalAudioSentKBitrate:(double)a0;
- (double)totalNetTraffic;
- (id)init;
- (void)dealloc;

@end
