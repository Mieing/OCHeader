@class NSString;
@protocol DVEEditingRuntimeProtocol, DVENLEInterfaceProtocol, IESServiceProvider, DVECoreDraftServiceProtocol, DVECoreActionServiceProtocol;

@interface DVEAudioEditor : NSObject <DVECoreAudioProtocol>

@property (weak, nonatomic) id<DVECoreDraftServiceProtocol> draftService;
@property (weak, nonatomic) id<DVECoreActionServiceProtocol> actionService;
@property (weak, nonatomic) id<DVENLEInterfaceProtocol> nle;
@property (weak, nonatomic) id<DVEEditingRuntimeProtocol> mediaContext;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)audioSplitForSlot:(id)a0 autoCommit:(BOOL)a1 completion:(id /* block */)a2;
- (void)removeAudioSegment:(id)a0 autoCommit:(BOOL)a1 completion:(id /* block */)a2;
- (id)audioMapForSlot:(id)a0;
- (id)calculateSelectSlotForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)addAudioResource:(id)a0 audioName:(id)a1 audioId:(id)a2 audioInfo:(id)a3 clipedStart:(struct { long long x0; int x1; unsigned int x2; long long x3; })a4 clipedDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a5 isBGM:(BOOL)a6;
- (id)replaceAudioResource:(id)a0 audioName:(id)a1 audioId:(id)a2 audioInfo:(id)a3 clipedStart:(struct { long long x0; int x1; unsigned int x2; long long x3; })a4 clipedDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a5 isBGM:(BOOL)a6;
- (void)audioSplitForSlot:(id)a0 newSlotName:(id)a1 autoCommit:(BOOL)a2 completion:(id /* block */)a3;
- (void)changeAudioSpeed:(double)a0 slot:(id)a1 shouldKeepTone:(BOOL)a2;
- (void)trimAudio:(id)a0 targetStartTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 autoCommit:(BOOL)a2;
- (void)trimAudio:(id)a0 targetEndTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 autoCommit:(BOOL)a2;
- (void)moveAudioSlot:(id)a0 insertSection:(long long)a1 targetTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2 isNewInsert:(BOOL)a3 autoCommit:(BOOL)a4;
- (void)trimAudioAfterMainDurationChanged;
- (void)trimAllAudiosToMainDuration;
- (void)replenishBgmAfterAddVideo:(id)a0;
- (void)p_adjustFadeInOutWithSlot:(id)a0;
- (void)trimAudioAfterMainDurationChangedByKeepClipRange;
- (void)p_splitAudioSlot:(id)a0 newSlotName:(id)a1 splitTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 commit:(BOOL)a3 completion:(id /* block */)a4;
- (void)p_splitAudioSlot:(id)a0 splitTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 commit:(BOOL)a2 completion:(id /* block */)a3;
- (void)p_updateAudioClipRangeEndAccordingToAudioTimeRangeForSlot:(id)a0;
- (void)removeAudioSegmentSpecial:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
