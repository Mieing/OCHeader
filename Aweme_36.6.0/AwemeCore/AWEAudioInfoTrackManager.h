@class NSString;

@interface AWEAudioInfoTrackManager : NSObject

@property (nonatomic) BOOL isObservingVolumeChangeFlag;
@property (copy, nonatomic) NSString *volumeChangeObserverIdentifier;
@property (nonatomic) double preVolumeBeforeChange;
@property (nonatomic) double newVolumeAfterChange;
@property (nonatomic) BOOL isHeadphonesOn;

+ (id)currentAwemeModel;
+ (id)sharedInstance;

- (void)p_addObserver;
- (void)handleAudioSessionRouteChangeNotification:(id)a0;
- (void)p_removeObserver;
- (void)trackVolumeChangeInfoWithPreVolume:(double)a0 newVolume:(double)a1;
- (void)reportVolumeChangeInfo;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
