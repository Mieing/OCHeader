@class AWEBinding;

@interface AWEMusicDetailCreateVideoHelper : AWEMusicDetailFeatureHelper

@property (retain, nonatomic) AWEBinding *captionPreloadBinding;

- (void)createVideoFromAIFollow;
- (void)createVideoWithSchemaString:(id)a0;
- (void)createVideoWithMusicID;
- (void)createVideo;
- (void)createVideoWithoutMusic;
- (void)setupCaptionPreloadBindingIfNeeded;
- (BOOL)musicIsAvailable;
- (void)createVideo:(id)a0 info:(id)a1;
- (id)createVideoInfoWithInspirationModel:(id)a0 extraTrackParams:(id)a1;
- (void)startComposerWithQuickFlashModel:(id)a0 musicModel:(id)a1 trackInfo:(id)a2;
- (BOOL)needInterceptMultipleCameraInstance;
- (BOOL)p_shouldEnterSocialCameraWith:(id)a0;
- (BOOL)p_enableStory25MusicShootSameOptimization;
- (id)createInspirationParamsWithModel:(id)a0;
- (void)createVideoWithInspirationModel:(id)a0 extraTrackParams:(id)a1;
- (void)createQuickFlashVideoWithQuickFlashModel:(id)a0 musicModel:(id)a1 trackInfo:(id)a2;
- (void).cxx_destruct;

@end
