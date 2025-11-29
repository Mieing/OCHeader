@class AWEBinding, NSArray, DVESelectSegment, NSString, RACSignal, NLEModel_OC, NLETrackSlot_OC;
@protocol DVESelectedSegmentContextProtocol, DVEMediaContextNLEEditorDelegate, DVEMediaContextNLEInterfaceDelegate;

@interface DVEEditingRuntime : DVEEditingContext <DVEEditingRuntimeProtocol>

@property (nonatomic) BOOL enableFrameExtractUseVE;
@property (nonatomic) BOOL isUpgradesOn;
@property (nonatomic) BOOL shouldUpgradeAudioToCombineAudio;
@property (nonatomic) BOOL isAdvanceEditSupportSoundFX;
@property (nonatomic) BOOL isLockCurrentTime;
@property (nonatomic) BOOL isLockMappingTimelineVideoSegment;
@property (nonatomic) BOOL isLockMappingTimelineAudioSegment;
@property (nonatomic) BOOL isMultipleTrackClipping;
@property (nonatomic) BOOL enableMultipleTracks;
@property (nonatomic) BOOL hasAudioDiff;
@property (weak, nonatomic) id<DVEMediaContextNLEEditorDelegate> nleEditorDelegate;
@property (weak, nonatomic) id<DVEMediaContextNLEInterfaceDelegate> nleInterfaceDelegate;
@property (weak, nonatomic) id<DVESelectedSegmentContextProtocol> selectedContext;
@property (readonly, weak, nonatomic) NLEModel_OC *nleModel;
@property (retain, nonatomic) NLETrackSlot_OC *selectBlendVideoSegment;
@property (retain, nonatomic) NLETrackSlot_OC *selectMainVideoSegment;
@property (retain, nonatomic) NLETrackSlot_OC *selectAudioSegment;
@property (retain, nonatomic) DVESelectSegment *mappingTimelineVideoSegment;
@property (retain, nonatomic) NLETrackSlot_OC *mappingTimelineAudioSegment;
@property (retain, nonatomic) NSArray *audioSlotsInCurrentUITrack;
@property (nonatomic) BOOL singleForRotate;
@property (nonatomic) BOOL disableMultiTrackViewVerticalScroll;
@property (retain, nonatomic) NLETrackSlot_OC *recordSlotBeforePanel;
@property (copy, nonatomic) NSString *currentLockSegmentId;
@property (copy, nonatomic) NSString *changedTimeRangeSlot;
@property (copy, nonatomic) NSString *didReversedSlotID;
@property (nonatomic) BOOL inOrderVideoMode;
@property (nonatomic) BOOL isZooming;
@property (nonatomic) BOOL inPreview;
@property (nonatomic) BOOL lockSegmentForce;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } safeOffsetTime;
@property (nonatomic) BOOL isTapBlankForTrack;
@property (nonatomic) BOOL isRefreshWithoutDone;
@property (nonatomic) BOOL disableSelect;
@property (nonatomic) BOOL enableMainVideoLengthEdit;
@property (nonatomic) BOOL enableAudioLengthEdit;
@property (nonatomic) BOOL autoEnableMainSlotBorder;
@property (nonatomic) BOOL showRealOverlapTransitionInfo;
@property (nonatomic) BOOL isFullScreenPreview;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } currentTime;
@property (nonatomic) double timelineOffsetX;
@property (nonatomic) struct CGPoint { double x0; double x1; } targetContentOffset;
@property (nonatomic) unsigned long long multipleTrackType;
@property (nonatomic) double timeScale;
@property (readonly, nonatomic) unsigned long long timelineScrollSource;
@property (readonly, nonatomic) RACSignal *editorDidChangeSignal;
@property (readonly, nonatomic) RACSignal *modelDidChangeSignal;
@property (readonly, nonatomic) RACSignal *audioDidChangeSignal;
@property (readonly, nonatomic) AWEBinding *targetOffsetUpdateBinding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateCurrentTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)updateMappingTimelineVideoSlotForce:(BOOL)a0;
- (void)updateMultipleTrackFromMappingAudioSegment;
- (void)updateSelectedSegmentWhenUndoRedo;
- (void)selectEffectSlotWithId:(id)a0;
- (void)selectStickerSlotWithId:(id)a0;
- (void)selectAudioSlotWithId:(id)a0;
- (void)updateMultipleTrackWhenTimeChange;

@end
