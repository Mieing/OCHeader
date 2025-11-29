@class NSObject, AVAudioSessionRouteDescription;
@protocol OS_dispatch_queue;

@interface WCAirPlayCenter : NSObject {
    NSObject<OS_dispatch_queue> *_audioQueue;
}

@property (retain) AVAudioSessionRouteDescription *cachedRoute;
@property (readonly, nonatomic) BOOL isAirPlaying;
@property (readonly, nonatomic) long long currentAirPlayMode;
@property (readonly, nonatomic) BOOL isExternalPlaybackMode;
@property (readonly, nonatomic) BOOL isExternalScreenMode;

+ (id)sharedCenter;

- (id)init;
- (id)__currentRoute;
- (id)_getCurrentRouteSynchronously;
- (void)_updateCachedRouteAsynchronously;
- (void)audioSessionRouteChange:(id)a0;
- (void).cxx_destruct;

@end
