@class AWEVideoPublishViewModel;
@protocol ACCSequenceEditServiceProtocol;

@interface ACCTrimCropSlidesContainer : ACCTrimCropCommonContainer

@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) AWEVideoPublishViewModel *publishViewModel;

- (id)provideSingleton:(id)a0 ACCTrimCropSequencePieceServiceProtocol:(id)a1;
- (id)provideSingleton:(id)a0 ACCTrimCropPieceAddProtocol:(id)a1;
- (id)provideSingleton:(id)a0 ACCTrimBeatEditServiceProtocol:(id)a1;
- (id)provideSingleton:(id)a0 ACCTCETrackEventServiceProtocol:(id)a1;
- (id)provideSingleton:(id)a0 ACCTrimCropEditorFinishProtocol:(id)a1;
- (id)provideSingleton:(id)a0 ACCTrimEditAudioServiceProtocol:(id)a1;
- (void).cxx_destruct;

@end
