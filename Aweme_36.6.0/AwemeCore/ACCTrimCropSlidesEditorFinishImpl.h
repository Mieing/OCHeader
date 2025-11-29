@class NSString, AWEVideoPublishViewModel;
@protocol ACCTrimEditAudioServiceProtocol, IESServiceProvider, ACCTrimCropEditorFlagProtocol, ACCVideoConfigProtocol;

@interface ACCTrimCropSlidesEditorFinishImpl : NSObject <ACCTrimCropEditorFinishProtocol>

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (weak, nonatomic) id<ACCTrimCropEditorFlagProtocol> editorFlag;
@property (weak, nonatomic) id<ACCTrimEditAudioServiceProtocol> audioService;
@property (weak, nonatomic) id<ACCVideoConfigProtocol> videoConfig;
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
