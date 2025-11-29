@class NSString;
@protocol UIViewControllerTransitioningDelegate;

@interface AWEStudioIMCreationServiceImpl : NSObject <AWEStudioIMCreationService>

@property (retain, nonatomic) id<UIViewControllerTransitioningDelegate> transitionHost;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)startSelfieEmojiRecordWithExtraInfo:(id)a0;
- (id)startIMMediaEdit:(id)a0 sourceModel:(id)a1 imModel:(id)a2;
- (void)requestPublishResultWithTaskID:(id)a0 completion:(id /* block */)a1;
- (void)generateLivePhotoPairedResourceWithVideoFilePath:(id)a0 imageFilePath:(id)a1 completion:(id /* block */)a2;
- (id)createCameraCustomizationWithConfig:(id)a0;
- (id)startStoryVideoWithInfo:(id)a0 fromShake:(BOOL)a1 imModel:(id)a2;
- (id)startStoryVideoWithStickerIDArray:(id)a0 musicModel:(id)a1 imModel:(id)a2 info:(id)a3 referString:(id)a4;
- (id)startStoryVideoWithStickerIDArray:(id)a0 musicModel:(id)a1 imModel:(id)a2 info:(id)a3;
- (id)createEditCustomizationWithConfig:(id)a0;
- (id)startNormalCameraWithConfig:(id)a0 imModel:(id)a1;
- (id)startStickerCameraConfig:(id)a0 imModel:(id)a1;
- (id)realCreateStickerStudioTaskWithCameraConfig:(id)a0 imModel:(id)a1 effectModel:(id)a2;
- (void).cxx_destruct;

@end
