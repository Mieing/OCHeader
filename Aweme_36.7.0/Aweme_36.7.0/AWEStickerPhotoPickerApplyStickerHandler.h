@class AWEAssetsCropAndClipManager, NSString, ACCRecordMode, UIViewController;

@interface AWEStickerPhotoPickerApplyStickerHandler : AWEStickerPhotoPickerBaseHandler <ACCRecordFlowServiceSubscriber, ACCRecordConfigDurationHandler>

@property (retain, nonatomic) AWEAssetsCropAndClipManager *cropAndClipManager;
@property (retain, nonatomic) UIViewController *fullscreenCropVC;
@property (copy, nonatomic) NSString *pixaloopImgK;
@property (copy, nonatomic) NSString *enterMethod;
@property (nonatomic) unsigned long long uploadResourceMethod;
@property (retain, nonatomic) ACCRecordMode *originRecordMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)flowServiceStateDidChanged:(unsigned long long)a0 preState:(unsigned long long)a1;
- (id)publishModel;
- (void)showCropOnFullscreenVC;
- (void)dismissFullscreenVCAndCropView;
- (double)getComponentDuration:(id)a0;
- (void)handlerDidBecomeActive;
- (void)multiAssetSelectionWithAsset:(id)a0 atIndex:(long long)a1;
- (id)getAlbumInputData;
- (void)p_handlePhotoAssets:(id)a0;
- (void)p_changeCurrentRecordMode;
- (void)changeCurrentModelToRecord;
- (void)resetCurrentSticker;
- (void)restoreOriginalRecordMode;
- (void)handleVideoInfo:(id)a0 isLivePhoto:(BOOL)a1;
- (void)handleImageInfo:(id)a0;
- (double)getVideoMaxDurationTime;
- (void)p_assertModelApplyHandler:(id)a0 forKey:(id)a1 photoSource:(unsigned long long)a2;
- (void)jumpClipVideoWithStaticImageURL:(id)a0 assetSize:(struct CGSize { double x0; double x1; })a1 processAsset:(id)a2 videoDuration:(double)a3 isLivePhoto:(BOOL)a4;
- (void)dismissAlbumIfNeeded;
- (id)p_assertModelToParams:(id)a0;
- (BOOL)shouldHandlerCurrentSticker:(id)a0;
- (void)setupPhotoPicker;
- (void)applyCurrentSticker;
- (void).cxx_destruct;

@end
