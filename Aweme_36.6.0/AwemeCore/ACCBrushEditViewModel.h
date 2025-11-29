@class NLEInterface_OC, NSString, NSArray, RACSignal, RACSubject, AWEVideoPublishViewModel, DVEBrushEditHelper, DVEEffectValue, NSNumber;
@protocol ACCSequenceEditServiceProtocol, ACCEditServiceProtocol;

@interface ACCBrushEditViewModel : ACCEditViewModel <ACCBrushEditServiceProtocol>

@property (retain, nonatomic) NSArray *basicBrushValues;
@property (retain, nonatomic) NSArray *expansionBrushValues;
@property (retain, nonatomic) NSArray *expansionBrushAvailableInVideo;
@property (retain, nonatomic) NSArray *expansionBrushValuesAll;
@property (nonatomic) BOOL completeLoadColors;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) AWEVideoPublishViewModel *currentPublishModel;
@property (retain, nonatomic) RACSignal *willShowBrushEditVCSignal;
@property (retain, nonatomic) RACSubject *willShowBrushEditVCSubject;
@property (retain, nonatomic) RACSignal *didDismissBrushEditVCSignal;
@property (retain, nonatomic) RACSubject *didDismissBrushEditVCSubject;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (nonatomic) BOOL isLoadingResource;
@property (nonatomic) long long restartResourceLoadingTimes;
@property (copy, nonatomic) NSArray *subtypes;
@property (retain, nonatomic) DVEBrushEditHelper *brushHelper;
@property (nonatomic) BOOL hasEdited;
@property (nonatomic) BOOL initialUndoCount;
@property (retain, nonatomic) DVEEffectValue *currentBrushValue;
@property (copy, nonatomic) NSString *lastBrushPath;
@property (nonatomic) double sliderValue;
@property (nonatomic) double relativeSliderValue;
@property (copy, nonatomic) NSString *currentBrushSlotId;
@property (retain, nonatomic) NSNumber *selectedColorIndex;
@property (nonatomic) BOOL largeSliderChangeState;
@property (copy, nonatomic) NSString *currentProjectUUID;
@property (readonly, weak, nonatomic) NLEInterface_OC *nle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)continuePlayMusic;
- (void)reloadBrushResourcesIfNeeded;
- (void)resetCurrentRepositoryProjectIfNeeded;
- (void)willShowBrushEditVC;
- (void)resetBrushHelperStatusData;
- (BOOL)isEditedBrushSlot:(id)a0;
- (void)updateBrushStickerInfoWithNle:(id)a0 brushSlot:(id)a1;
- (void)didDismissBrushEditVC;
- (void)saveBrushStickerWithNle:(id)a0 brushSlot:(id)a1 savePath:(id)a2;
- (void)preLoadBrushResources;
- (BOOL)isOnlySupportPictureWithBrushModel:(id)a0;
- (void)preloadExpansionBrushResources;
- (void).cxx_destruct;
- (void)dealloc;

@end
