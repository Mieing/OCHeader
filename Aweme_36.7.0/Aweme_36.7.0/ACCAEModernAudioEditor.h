@protocol AEKMegaEditor, DVECoreDraftServiceProtocol, IESServiceProvider, DVEToastProtocol, AWEEditKit, ACCAdvanceEditViewModelProtocol, DVEMulitpleTrackViewServiceProtocol, DVETrackEventProtocol, DVECoreActionServiceProtocol, DVEEditingRuntimeProtocol;

@interface ACCAEModernAudioEditor : ACCAEAudioEditor {
    id<IESServiceProvider> _serviceProvider;
}

@property (weak, nonatomic) id<AWEEditKit> editKit;
@property (weak, nonatomic) id<AEKMegaEditor> megaEditor;
@property (weak, nonatomic) id<DVEEditingRuntimeProtocol> mediaContext;
@property (weak, nonatomic) id<DVECoreDraftServiceProtocol> draftService;
@property (weak, nonatomic) id<ACCAdvanceEditViewModelProtocol> editViewModel;
@property (weak, nonatomic) id<DVEMulitpleTrackViewServiceProtocol> multipleTrackViewService;
@property (weak, nonatomic) id<DVEToastProtocol> toast;
@property (weak, nonatomic) id<DVECoreActionServiceProtocol> actionService;
@property (weak, nonatomic) id<DVETrackEventProtocol> trackManager;

- (void)audioSplitForSlot:(id)a0 autoCommit:(BOOL)a1 completion:(id /* block */)a2;
- (void)removeAudioSegment:(id)a0 autoCommit:(BOOL)a1 completion:(id /* block */)a2;
- (id)calculateSelectSlotForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)replaceAudioResource:(id)a0 audioName:(id)a1 audioId:(id)a2 audioInfo:(id)a3 clipedStart:(struct { long long x0; int x1; unsigned int x2; long long x3; })a4 clipedDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a5 isBGM:(BOOL)a6;
- (void)audioSplitForSlot:(id)a0 newSlotName:(id)a1 autoCommit:(BOOL)a2 completion:(id /* block */)a3;
- (void)changeAudioSpeed:(double)a0 slot:(id)a1 shouldKeepTone:(BOOL)a2;
- (void)trimAudio:(id)a0 targetStartTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 autoCommit:(BOOL)a2;
- (void)trimAudio:(id)a0 targetEndTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 autoCommit:(BOOL)a2;
- (void)moveAudioSlot:(id)a0 insertSection:(long long)a1 targetTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2 isNewInsert:(BOOL)a3 autoCommit:(BOOL)a4;
- (void)trimAudioAfterMainDurationChanged;
- (void)trimAllAudiosToMainDuration;
- (void)trackDuration:(double)a0 event:(id)a1;
- (void)p_markUserEditAfterBingoWithAudioOperator:(id)a0;
- (double)p_getAvailableSpeedForAudio:(id)a0 Speed:(double)a1;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)setServiceProvider:(id)a0;
- (id)serviceProvider;

@end
