@class UISlider, NSString, MPVolumeView;

@interface BDPVideoVolumeHelper : NSObject <BDPContainerLifeCycleMessage, BDPAPPFramePreloadProtocol, BDPWebViewPageLifeCycleMessage>

@property (retain, nonatomic) MPVolumeView *volView;
@property (retain, nonatomic) UISlider *volSlider;
@property (nonatomic) BOOL volumeReady;
@property (nonatomic) float latestUnSetVol;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;
+ (id)sharedHelper;

- (void)applicationEnterWithUniqueID:(id)a0;
- (void)viewDidAppear:(id)a0 uniqueID:(id)a1;
- (void)viewDidDisappear:(id)a0 uniqueID:(id)a1;
- (void)applicationLCPArrive:(id)a0 timestamp:(double)a1;
- (void)pageLCPArrive:(id)a0 pageID:(long long)a1;
- (float)getMediaVolume;
- (void)showVolView;
- (BOOL)delayAddVolumeView;
- (void)setupVolView;
- (void)addVolumeView:(id)a0;
- (void)addVolumeViewForUniqueID:(id)a0;
- (void)checkWhenVolViewReady;
- (void)dismissVolView;
- (void).cxx_destruct;
- (BOOL)isReady;
- (id)init;
- (void)setMediaVolume:(double)a0;
- (void)setup;

@end
