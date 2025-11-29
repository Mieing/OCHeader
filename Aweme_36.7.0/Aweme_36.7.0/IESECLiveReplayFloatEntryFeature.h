@class NSString;

@interface IESECLiveReplayFloatEntryFeature : NSObject <IESECLiveReplayFloatEntryFeature>

@property (nonatomic) unsigned long long replayFloatStoredPlayState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)fillEventHandler:(id)a0;
- (id)liveReplayVideoQuery:(id)a0;
- (void)updateReplayModel:(id)a0 toLiveFloat:(id)a1;
- (void)setupForPageVC:(id)a0;
- (void)setupHeadMoreVideoForPageVC:(id)a0;
- (void)setLiveReplayFloatEntryVanishAndPosition:(id)a0;
- (void)setLiveReplayFloatEntryAlpha:(double)a0 pageVC:(id)a1;
- (void)floatEntryViewUpdate:(id)a0 withModel:(id)a1 pageVC:(id)a2;
- (void)detailDidUpdate:(id)a0;
- (void)handleReplayEntryAnimationWithPercent:(double)a0 isUp:(BOOL)a1 pageVC:(id)a2;
- (id)init;
- (void)dealloc;

@end
