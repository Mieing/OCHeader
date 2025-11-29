@class ACCAESoundFXApplyHandler, ACCAESoundFXAbilityTracker, NSString;
@protocol DVEEditingRuntimeProtocol, DVECoreAudioProtocol, DVELoadingViewProtocol, ACCSoundFXPickerAbilityProtocol, ACCAEComponentActionProtocol, DVEEditingContextProtocol, DVEMulitpleTrackViewServiceProtocol, DVETrackEventProtocol, DVEPlayerServiceProtocol, ACCAEViewContainerProtocol;

@interface ACCAESoundFXComponent : ACCAdvanceEditComponent <ACCSoundFXPickerAbilityDelegate>

@property (weak, nonatomic) id<ACCAEComponentActionProtocol> actionHandler;
@property (weak, nonatomic) id<ACCAEViewContainerProtocol> viewControllerService;
@property (weak, nonatomic) id<ACCSoundFXPickerAbilityProtocol> soundFXPicker;
@property (weak, nonatomic) id<DVEEditingContextProtocol> editingContext;
@property (weak, nonatomic) id<DVEEditingRuntimeProtocol> mediaContext;
@property (weak, nonatomic) id<DVETrackEventProtocol> dveTracker;
@property (weak, nonatomic) id<DVEPlayerServiceProtocol> playerService;
@property (weak, nonatomic) id<DVECoreAudioProtocol> audioEditor;
@property (weak, nonatomic) id<DVEMulitpleTrackViewServiceProtocol> multipleTrackViewService;
@property (weak, nonatomic) id<ACCAEViewContainerProtocol> rootViewController;
@property (weak, nonatomic) id<DVELoadingViewProtocol> loadingView;
@property (retain, nonatomic) ACCAESoundFXApplyHandler *applyHandler;
@property (retain, nonatomic) ACCAESoundFXAbilityTracker *aeTracker;
@property (nonatomic) double playerTimeWhenPanelShown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)currentPlayerTime;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (void)bindServices:(id)a0;
- (void)componentFirstFrameDidRender;
- (BOOL)checkIfCurrentPlayerTimeEnableToAddAndToastIfNeeded;
- (void)handleClickAddSoundFX:(id)a0;
- (void)handleClickSoundFXVolume:(id)a0;
- (void)handleClickSoundFXSplit:(id)a0;
- (void)handleClickSoundFXDelete:(id)a0;
- (void)handleClickSoundFXReplace:(id)a0;
- (void)handleClickSoundFXCopy:(id)a0;
- (void)preloadSoundFXPanelCategories;
- (id)currentSelectedSoundFX;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })clipRangeWithStart:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 audioDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 limitEndTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (void)soundFXPicker:(id)a0 willShowSoundFXPanel:(id)a1;
- (void)soundFXPicker:(id)a0 didShowSoundFXPanel:(id)a1;
- (void)soundFXPicker:(id)a0 willDismissSoundFXPanel:(id)a1;
- (void)soundFXPicker:(id)a0 didDismissSoundFXPanel:(id)a1;
- (void)soundFXPicker:(id)a0 didSelectToUseSoundFX:(id)a1 atCategoryTab:(id)a2;
- (void)soundFXPicker:(id)a0 selectSoundFXPlayable:(id)a1;
- (void).cxx_destruct;

@end
