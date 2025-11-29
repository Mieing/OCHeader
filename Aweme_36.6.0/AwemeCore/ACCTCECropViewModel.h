@class DVESelectedSegment, NSString, NLETrackSlot_OC, NLEModel_OC, ACCTCECropPointInfo, ACCTCECropResource;
@protocol ACCTCETrackEventServiceProtocol, ACCTrimCropSequencePieceServiceProtocol, ACCTCECropViewModelDelegate, ACCTrimCropPieceProtocol, ACCTrimCropEditorFlagProtocol, ACCEditServiceProtocol;

@interface ACCTCECropViewModel : ACCEditViewModel <ACCCropPickerViewDelegate, ACCTCECropPreviewDelegate>

@property (copy, nonatomic) NSString *cropTitle;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } preSeekTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } startSeekTime;
@property (nonatomic) double previousZoomScale;
@property (nonatomic) long long slotIndex;
@property (nonatomic) long long preCropRatio;
@property (nonatomic) double preCanvasRatio;
@property (nonatomic) struct CGSize { double width; double height; } preCanvasSize;
@property (retain, nonatomic) ACCTCECropPointInfo *preResourceInfo;
@property (retain, nonatomic) ACCTCECropResource *currentResource;
@property (retain, nonatomic) DVESelectedSegment *selectedSegment;
@property (retain, nonatomic) NLETrackSlot_OC *currentSlot;
@property (retain, nonatomic) NLEModel_OC *cachedModel;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCTrimCropPieceProtocol> cropPiece;
@property (weak, nonatomic) id<ACCTrimCropSequencePieceServiceProtocol> sequencePieceService;
@property (weak, nonatomic) id<ACCTrimCropEditorFlagProtocol> editorFlagService;
@property (weak, nonatomic) id<ACCTCETrackEventServiceProtocol> trackEventService;
@property (nonatomic) double pointAccuracy;
@property (weak, nonatomic) id<ACCTCECropViewModelDelegate> delegate;
@property (nonatomic) BOOL isNoteAutoCropEnter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)currentNLE;
- (void)dragPlayTimeBegin:(double)a0;
- (void)dragPlayTimeChanged:(double)a0;
- (void)dragPlayTimeEnd:(double)a0;
- (void)syncInfoToSlot:(id)a0 withCropResource:(id)a1;
- (void)copyPieceAtSlot:(id)a0 toSlot:(id)a1;
- (void)copyPieceDoneWithDstTrack:(id)a0 dstNLEModel:(id)a1 piece:(id)a2;
- (void)syncCopyFromSlot:(id)a0 toSlot:(id)a1 toShadowSlots:(id)a2 toSlotCanvasSize:(struct CGSize { double x0; double x1; })a3;
- (void)syncCopyDone:(id)a0 nle:(id)a1;
- (void)pickerView:(id)a0 didSelectCropOption:(id)a1;
- (void)updateToSlotScale:(id)a0 toSlotCanvasSize:(struct CGSize { double x0; double x1; })a1 fromSlot:(id)a2;
- (BOOL)isFlipAbilityAvailable;
- (void)previewDidCrop:(id)a0;
- (void)previewDidZoom:(id)a0 isZoomIn:(BOOL)a1;
- (void)didClickPlayAreaWithCropPreview:(id)a0;
- (void)previewDidFlip:(id)a0;
- (void)previewDidRotate:(id)a0;
- (void)cropWithSlot:(id)a0 cropResource:(id)a1;
- (void)rotateWithSlot:(id)a0 cropResource:(id)a1;
- (void)flipWithSlot:(id)a0 cropResource:(id)a1;
- (void)markUserCropAction;
- (void)markUserFlipAction;
- (void)markUserRotateAction;
- (void)syncToSlot:(id)a0 fromSlot:(id)a1 clipPoints:(id)a2 cropRatioType:(long long)a3 cropRatioValue:(double)a4 toSlotCanvasSize:(struct CGSize { double x0; double x1; })a5;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)seekToTime:(double)a0;
- (id)initWithServiceProvider:(id)a0;

@end
