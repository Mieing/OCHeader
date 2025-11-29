@class NSString, ACCTrimCropEditViewModel, AWEVideoPublishViewModel;
@protocol ACCTrimCropEditorFlagProtocol, ACCTrimEditAudioServiceProtocol, IESServiceProvider, ACCTrimCropPieceProtocol, ACCEditClipV1ServiceProtocol, ACCVideoConfigProtocol;

@interface ACCTrimCropMultiStageEditorFinishImpl : NSObject <ACCTrimCropEditorFinishProtocol>

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) ACCTrimCropEditViewModel *viewModel;
@property (weak, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (weak, nonatomic) id<ACCVideoConfigProtocol> videoConfig;
@property (weak, nonatomic) id<ACCTrimCropPieceProtocol> piece;
@property (weak, nonatomic) id<ACCEditClipV1ServiceProtocol> clipV1Service;
@property (weak, nonatomic) id<ACCTrimCropEditorFlagProtocol> editorFlag;
@property (weak, nonatomic) id<ACCTrimEditAudioServiceProtocol> audioService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canFinishTheJob:(id *)a0;
- (void)asynWorkingData:(id /* block */)a0;
- (void)p_updateFragmentInfo;
- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;

@end
