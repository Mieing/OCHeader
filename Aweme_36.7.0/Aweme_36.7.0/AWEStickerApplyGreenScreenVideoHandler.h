@class AWEPhotoPickerController, IESEffectModel, AWEVideoBGStickerManager, NSString, CAKAlbumViewController, AWEModalTransitionDelegate, AWETranslationTransitionController;
@protocol ACCEditMusicServiceProtocol;

@interface AWEStickerApplyGreenScreenVideoHandler : AWEStickerApplyBaseHandler <ACCRecordUploadButtonHandlerProtocol, AWEPhotoPickerControllerDelegate, AWEVideoBGStickerManagerDelegate, ACCRecordFlowServiceSubscriber, ACCRecordSwitchModeServiceSubscriber, ACCRecordConfigDurationHandler>

@property (retain, nonatomic) AWEPhotoPickerController *photoPickerController;
@property (retain, nonatomic) CAKAlbumViewController *selectMusicViewController;
@property (retain, nonatomic) AWETranslationTransitionController *clipTransitionDelegate;
@property (retain, nonatomic) AWEModalTransitionDelegate *transitionDelegate;
@property (retain, nonatomic) IESEffectModel *currentSticker;
@property (retain, nonatomic) AWEVideoBGStickerManager *videoBGStickerManager;
@property (weak, nonatomic) id<ACCEditMusicServiceProtocol> recordMusicService;
@property (nonatomic) BOOL hasRegister;
@property (nonatomic) BOOL isPhotoAuthNotDeterminedWhenResignActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidAppear;
- (void)switchModeServiceDidChangeMode:(id)a0 oldMode:(id)a1;
- (void)flowServiceStateDidChanged:(unsigned long long)a0 preState:(unsigned long long)a1;
- (void)flowServiceDidRemoveLastSegment:(BOOL)a0;
- (void)flowServiceDidRemoveAllSegment;
- (void)flowServiceDidTakePicture:(id)a0 error:(id)a1;
- (id)publishModel;
- (id)cameraService;
- (void)handleClickUploadButton;
- (double)getComponentDuration:(id)a0;
- (void)updateAudioRangeWithStartLocation:(double)a0;
- (void)camera:(id)a0 didTakeAction:(long long)a1 error:(id)a2 data:(id)a3;
- (void)camera:(id)a0 didRecvMessage:(id)a1;
- (void)didSelectNewSticker:(id)a0 oldSticker:(id)a1;
- (void)camera:(id)a0 willApplySticker:(id)a1 propSource:(long long)a2;
- (void)camera:(id)a0 didApplySticker:(id)a1 success:(BOOL)a2;
- (BOOL)couldHandleClickUploadButton;
- (void)photoPickerController:(id)a0 didSelectAsset:(id)a1 atIndex:(long long)a2;
- (void)photoPickerControllerDidSelectPlusButton:(id)a0;
- (void)handlerDidBecomeActive;
- (void)didChangeLayoutManager:(id)a0;
- (void)p_resetWithSticker:(id)a0;
- (void)openAlbumViewControllerIfPossible;
- (void)trackPropTrayShow;
- (void)trackPropTrayClick;
- (void)openVideoClipViewControllerWithAsset:(id)a0 fromAlbum:(BOOL)a1;
- (void)p_trackCustomizedEvent:(id)a0 withClickContent:(id)a1;
- (void)p_setupPhotoPicker;
- (void)trackToolsGreenScreenVideoPropShowPerformance:(double)a0;
- (void)clearPhotoPickerWithAnimated:(BOOL)a0;
- (id)clipVideoPageVC:(id)a0 completion:(id /* block */)a1;
- (void)requestAVAssetFromiCloudWithModel:(id)a0;
- (void)requestAVAssetForVideo:(id)a0 completion:(id /* block */)a1;
- (id)configPublish;
- (void).cxx_destruct;
- (double)selectedSpeed;
- (id)init;
- (void)dealloc;
- (void)p_applicationWillResignActive:(id)a0;
- (void)p_applicationDidBecomeActive:(id)a0;

@end
