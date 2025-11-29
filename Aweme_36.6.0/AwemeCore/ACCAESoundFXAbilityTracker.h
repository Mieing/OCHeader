@class NSString, ACCAEDataRepositoryInputData;
@protocol DVEEditingRuntimeProtocol, DVETrackEventProtocol;

@interface ACCAESoundFXAbilityTracker : NSObject <ACCSoundFXPickerAbilityTrackService, ACCAESoundFXAbilityTrackService>

@property (weak, nonatomic) ACCAEDataRepositoryInputData *inputData;
@property (weak, nonatomic) id<DVEEditingRuntimeProtocol> mediaContext;
@property (weak, nonatomic) id<DVETrackEventProtocol> dveTracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)commonTrackParams;
- (void)trackWhenToAuditionSoundFX:(id)a0 extraParams:(id)a1;
- (void)trackWhenDidClickSoundFXButton;
- (void)trackWhenDidClickToChangeVolumeForSlot:(id)a0;
- (void)trackWhenDidClickToDivideForSlot:(id)a0;
- (void)trackWhenDivideMaterialSuccessForSlot:(id)a0;
- (void)trackWhenDidClickToDeleteForSlot:(id)a0;
- (void)trackWhenDidClickToReplaceForSlot:(id)a0;
- (void)trackWhenDidClickToCopySoundFXWithResourceModel:(id)a0;
- (void)trackPerformanceWhenToApplySoundFXWithResourceModel:(id)a0 extraParams:(id)a1;
- (id)initWithAEDataRepositoryInputData:(id)a0 mediaContext:(id)a1 dveTracker:(id)a2;
- (void).cxx_destruct;

@end
