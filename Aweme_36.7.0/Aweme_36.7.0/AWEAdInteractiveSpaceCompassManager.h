@class NSNumber, AWELocationDisposable, AVAudioPlayer;
@protocol AWEAdTigerFromEastManager;

@interface AWEAdInteractiveSpaceCompassManager : AWEAdInteractiveSpaceManager

@property (retain, nonatomic) AWELocationDisposable *headingDispose;
@property (retain, nonatomic) NSNumber *compassOrientation;
@property (retain, nonatomic) AVAudioPlayer *compassSoundPlayer;
@property (weak, nonatomic) id<AWEAdTigerFromEastManager> delegate;

+ (BOOL)shouldShowAdInteractiveSpaceLynxContainer:(id)a0;

- (void)willDisplayCellWithContext:(id)a0;
- (void)playerDidUpdateWith:(id)a0;
- (void)viewDidDisappearWith:(id)a0;
- (void)rifleView:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)rifleView:(id)a0 didLoadFailedWithURL:(id)a1 error:(id)a2;
- (void)getUserCompassOrientation;
- (void)trackAdInteractiveSpace:(id)a0 resultType:(long long)a1 extraData:(id)a2 preLoadType:(long long)a3;
- (void)showAdInteractiveSpaceLynxContainer;
- (void)enableCompassSoundPlayer;
- (void)adInteractiveSpaceInteractionFinish;
- (void)showAdInteractiveSpaceCompassView;
- (void)handelAdInteractiveSpaceInteractionStateWith:(long long)a0 Method:(long long)a1;
- (void)interactiveSpaceContainerPreLoadStart;
- (void)reset:(id)a0;
- (void).cxx_destruct;
- (void)applicationDidEnterBackground;
- (void)clearData;
- (void)reset;

@end
