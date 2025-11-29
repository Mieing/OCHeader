@class AWEPhotoPickerController, CAKModalTransitionDelegate, NSString, NSMutableSet, IESEffectModel, CAKAlbumViewController, AWEAssetModel;
@protocol ACCSelectAlbumAssetsProtocol, AWEStickerViewLayoutManagerProtocol;

@interface AWEStickerPhotoPickerBaseHandler : AWEStickerApplyBaseHandler <ACCSelectAlbumAssetsDelegate, AWEPhotoPickerControllerDelegate, ACCRecordUploadButtonHandlerProtocol>

@property (retain, nonatomic) id<ACCSelectAlbumAssetsProtocol> albumViewControllerBuilder;
@property (nonatomic) BOOL hasRegister;
@property (nonatomic) BOOL isPhotoAuthNotDeterminedWhenResignActive;
@property (retain, nonatomic) AWEAssetModel *currentModel;
@property (nonatomic) long long currentIndex;
@property (retain, nonatomic) NSMutableSet *trackedAssetIDs;
@property (retain, nonatomic) IESEffectModel *currentSticker;
@property (retain, nonatomic) AWEPhotoPickerController *photoPickerController;
@property (weak, nonatomic) id<AWEStickerViewLayoutManagerProtocol> currentLayoutManager;
@property (retain, nonatomic) CAKModalTransitionDelegate *transitionDelegate;
@property (retain, nonatomic) CAKAlbumViewController *albumViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleClickUploadButton;
- (void)albumViewControllerDidSelectOneAsset:(id)a0;
- (void)camera:(id)a0 didTakeAction:(long long)a1 error:(id)a2 data:(id)a3;
- (void)camera:(id)a0 didRecvMessage:(id)a1;
- (void)didSelectNewSticker:(id)a0 oldSticker:(id)a1;
- (void)camera:(id)a0 willApplySticker:(id)a1 propSource:(long long)a2;
- (void)camera:(id)a0 didApplySticker:(id)a1 success:(BOOL)a2;
- (BOOL)couldHandleClickUploadButton;
- (void)photoPickerController:(id)a0 didSelectAsset:(id)a1 atIndex:(long long)a2;
- (void)photoPickerControllerDidSelectPlusButton:(id)a0;
- (void)photoPickerController:(id)a0 didClickMultiSelectionFinishButton:(id)a1;
- (void)photoPickerController:(id)a0 willDisplayAsset:(id)a1 atIndex:(long long)a2;
- (void)handlerDidBecomeActive;
- (void)didChangeLayoutManager:(id)a0;
- (void)p_resetWithSticker:(id)a0;
- (void)p_removePhotoSelectViewsFromLayoutManager:(id)a0 animated:(BOOL)a1;
- (void)p_showPhotoSelectViewsOnLayoutManager:(id)a0 animated:(BOOL)a1;
- (void)p_resetPhotoPickerController;
- (void)trackPropTrayShow;
- (void)multiAssetSelectionWithAsset:(id)a0 atIndex:(long long)a1;
- (void)trackToolsGreenScreenPropShowPerformance:(double)a0;
- (void)p_setupPhotoPicker;
- (void)clearPhotoPickerWithAnimated:(BOOL)a0;
- (id)getAlbumInputData;
- (void)resetCurrentSticker;
- (void)p_trackCustomizedEvent:(id)a0 extraParams:(id)a1;
- (BOOL)shouldHandlerCurrentSticker:(id)a0;
- (void)setupPhotoPicker;
- (void)applyCurrentSticker;
- (id)getMediaInfoWithModel:(id)a0;
- (void)openAlbumViewControllerIfPossible:(BOOL)a0;
- (void)photoPickerController:(id)a0 didFinishPickingWithAssets:(id)a1;
- (void)photoPickerControllerDidCancel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)identifier;
- (void)dealloc;
- (void)p_applicationWillResignActive:(id)a0;
- (void)p_applicationDidBecomeActive:(id)a0;

@end
