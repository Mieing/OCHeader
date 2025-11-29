@class NSString, NSArray, HTSVideoData, HTSMixPlayerConfig, NSMutableDictionary, VELimitLogger, AVMutableAudioMix, NSObject, AVMutableComposition, HTSMediaExporter;
@protocol HTSMediaMixPlayerDelegate, OS_dispatch_semaphore;

@interface HTSMediaMixPlayer : AVPlayer <HTSMediaExportable>

@property (retain, nonatomic) AVMutableAudioMix *audioMix;
@property (nonatomic) float previousRate;
@property (nonatomic) BOOL isPlaying;
@property (retain, nonatomic) NSMutableDictionary *playerTimeObserverDict;
@property (nonatomic) BOOL useNewModule;
@property (nonatomic) BOOL isResetIteming;
@property (nonatomic) BOOL usedForAVPlayLayer;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } seekingTime;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *reload_sync_sem;
@property (copy, nonatomic) id /* block */ reloadCompleteBlock;
@property (retain, nonatomic) HTSMixPlayerConfig *playerConfig;
@property (retain, nonatomic) VELimitLogger *limitLogger;
@property (nonatomic) BOOL autoRepeat;
@property (nonatomic) BOOL disableAutoResume;
@property (weak, nonatomic) HTSVideoData *videoData;
@property (readonly, nonatomic) NSArray *assets;
@property (retain, nonatomic) AVMutableComposition *mixComposition;
@property (weak, nonatomic) id<HTSMediaMixPlayerDelegate> delegate;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } lastPlayTime;
@property (copy, nonatomic) id /* block */ playerCompleteBlock;
@property (copy, nonatomic) id /* block */ playerAutoRepeatBlock;
@property (copy, nonatomic) id /* block */ playerTimerBlock;
@property (retain, nonatomic) HTSMediaExporter *mediaExporter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createItemWith:(id)a0 playerConfig:(id)a1;
+ (id)audioPlayerWithVideoData:(id)a0;
+ (id)mixPlayerWithVideoData:(id)a0 withConfig:(id)a1;

- (void)setVideoHeader:(id)a0;
- (void)setVolumeForAudio:(float)a0;
- (void)setVolumeForVideo:(float)a0;
- (void)addAudioWithAsset:(id)a0;
- (void)addVideoWithAsset:(id)a0;
- (void)routeChanged:(id)a0;
- (BOOL)exportAudio:(id /* block */)a0;
- (void)replaceAudioAtIndex:(unsigned long long)a0 withAudioAsset:(id)a1;
- (void)resetSyncItem;
- (void)didResetItem;
- (void)resetItemOuttimeCheck;
- (id)addVideoWithUrl:(id)a0;
- (id)addAudioWithUrl:(id)a0;
- (id)replaceAudioAtIndex:(unsigned long long)a0 withAudioUrl:(id)a1;
- (void)removeAudioAtIndex:(unsigned long long)a0;
- (void)setTimeClipRange:(id)a0 toVideoAtIndex:(unsigned long long)a1;
- (void)setTimeClipRange:(id)a0 toAudioAtIndex:(unsigned long long)a1;
- (void)reloadSyncData;
- (double)currentTimeForAsset:(id)a0;
- (void)addPeriodicTimeObserverForAsset:(id)a0 actionBlock:(id /* block */)a1;
- (void)removeTimeObserverForAsset:(id)a0;
- (void)setVolumeForSubTrackVideo:(float)a0;
- (void)setVolume:(float)a0 forVideoAtIndex:(unsigned long long)a1;
- (void)setVolume:(float)a0 forAudioAtIndex:(unsigned long long)a1;
- (void)playItemStatusChange:(id)a0 object:(id)a1;
- (void)reloadData;
- (void).cxx_destruct;
- (void)pause;
- (id)init;
- (void)stop;
- (id)assets;
- (void)updateItem:(id)a0;
- (void)replay;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setRate:(float)a0;
- (void)dealloc;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 toleranceBefore:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 toleranceAfter:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 completionHandler:(id /* block */)a3;
- (void)reloadData:(id /* block */)a0;
- (void)resetItem;

@end
