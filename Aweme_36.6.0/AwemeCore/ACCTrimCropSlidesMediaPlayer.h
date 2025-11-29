@class NSString, AWEVideoPublishViewModel;
@protocol ACCSequenceEditServiceProtocol, ACCSequencePlayControlServiceProtocol, ACCTrimCropPieceProtocol, ACCTrimCropEditorConfigProtocol;

@interface ACCTrimCropSlidesMediaPlayer : NSObject <ACCEditPreviewMessageProtocol, ACCTrimCropMediaPlayerProtocol>

@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (nonatomic) double pieceStartTime;
@property (nonatomic) double pieceEndTime;
@property (weak, nonatomic) id<ACCTrimCropEditorConfigProtocol> editorConfig;
@property (weak, nonatomic) id<ACCTrimCropPieceProtocol> pieceProxy;
@property (weak, nonatomic) id<ACCSequencePlayControlServiceProtocol> sequencePlayControl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long playerStatus;

- (void)playerCurrentPlayTimeChanged:(double)a0;
- (id)playerContainer;
- (void)setupObserver;
- (id)preView;
- (void)setPlayTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (void)resetPieceTimeRangeFlag;
- (id)initWithEditService:(id)a0 viewModel:(id)a1;
- (void).cxx_destruct;
- (void)play;
- (void)pause;

@end
