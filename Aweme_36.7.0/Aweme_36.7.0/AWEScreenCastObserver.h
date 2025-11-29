@class MMKV, NSObject;
@protocol OS_dispatch_queue;

@interface AWEScreenCastObserver : NSObject

@property (nonatomic) BOOL isAirPlayConnect;
@property (nonatomic) BOOL isAirPlayMirroring;
@property (nonatomic) double airPlayMirroringStartTime;
@property (retain, nonatomic) MMKV *mmkv;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *audioSessionQueue;

- (void)audioSessionDidChange:(id)a0;
- (void)trackAirPlayMirroring:(BOOL)a0 duration:(long long)a1;
- (void)uiScreenIsConnected:(id)a0;
- (void)uiScreenIsDisconnected:(id)a0;
- (void)updateAirPlayStatus;
- (long long)airPlayMirroringDuration;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)applicationWillTerminate:(id)a0;

@end
