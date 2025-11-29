@class NSString, AWEPOIUGCSelectAlbumImpl, ACCStickerContainerView, AWEUITransitionHost;
@protocol UIViewControllerTransitioningDelegate, ACCSequenceEditServiceProtocol, ACCPublishMergeImageHelperProtocol;

@interface AWEVideoRouterPOIService : NSObject <AWEStudioPublishPOIService, AWEStudioCreationPOIService>

@property (retain, nonatomic) AWEUITransitionHost *transitionHost;
@property (retain, nonatomic) id<UIViewControllerTransitioningDelegate> nextTranslationTransitionDelegate;
@property (retain, nonatomic) AWEPOIUGCSelectAlbumImpl *albumImpl;
@property (nonatomic) long long totalShootPicCount;
@property (retain, nonatomic) ACCStickerContainerView *stickerContainerView;
@property (nonatomic) BOOL fetchMusicStatus;
@property (copy, nonatomic) NSString *musicName;
@property (retain, nonatomic) id<ACCPublishMergeImageHelperProtocol> mergeImageHelper;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)draftForPOIRatingID:(id)a0;
- (id)createVideoWithComposedInfo:(id)a0 referString:(id)a1 challengeID:(id)a2 effectID:(id)a3 poiInfo:(id)a4;
- (id)createVideoWithComposedInfo:(id)a0 referString:(id)a1 poiInfo:(id)a2 challengeID:(id)a3;
- (id)createVideoWithPoiModel:(id)a0 withInfo:(id)a1 referString:(id)a2;
- (void)mergeImagesInto:(id)a0 with:(id)a1;
- (void)startCamaraWithImageCount:(long long)a0 existedPublishModel:(id)a1 useImageEdit:(BOOL)a2 needMusic:(BOOL)a3 defaultShoot:(BOOL)a4 showQuickShoot:(BOOL)a5 showQuickAlbum:(BOOL)a6 hideEditPage:(BOOL)a7 progressBlock:(id /* block */)a8 trackParams:(id)a9 complete:(id /* block */)a10;
- (void)startImagePickerWithMaxCount:(long long)a0 existedPublishModel:(id)a1 logParamsDict:(id)a2 useImageEdit:(BOOL)a3 needMusic:(BOOL)a4 progressBlock:(id /* block */)a5 trackParams:(id)a6 complete:(id /* block */)a7;
- (void)restoreWithPublishModel:(id)a0 useImageEdit:(BOOL)a1 needMusic:(BOOL)a2 hideEditToolbar:(BOOL)a3 editPageToast:(id)a4 scrollToIndex:(long long)a5 progressBlock:(id /* block */)a6 complete:(id /* block */)a7 trackParams:(id)a8;
- (void)removeImageAtIndex:(long long)a0 publishModel:(id)a1;
- (void)moveImageFromIndex:(long long)a0 toIndex:(long long)a1 publishModel:(id)a2 complete:(id /* block */)a3;
- (void)publishWithModel:(id)a0 poiID:(id)a1 poiName:(id)a2 comment:(id)a3 noDefaultLanding:(BOOL)a4 extraParams:(id)a5 challengeID:(id)a6 tabId:(id)a7;
- (void)transitionDraftStatusAsPendingDelete:(id)a0;
- (BOOL)validAssetModelForPhoto:(id)a0;
- (void)setEditStickerView:(id)a0;
- (void)updateEditMergeHelper:(id)a0;
- (void)updateEditService:(id)a0;
- (id)createVideoWithPoiModel:(id)a0 withInfo:(id)a1;
- (void)__editConfigWithPublishModel:(id)a0 isRestore:(BOOL)a1 needMusic:(BOOL)a2 scrollToIndex:(long long)a3 progressBlock:(id /* block */)a4 complete:(id /* block */)a5;
- (void)__openEditorWithPublishModel:(id)a0 index:(long long)a1;
- (void)__infiniEditConfigWithPublishModel:(id)a0 isRestore:(BOOL)a1 needMusic:(BOOL)a2 scrollToIndex:(long long)a3 progressBlock:(id /* block */)a4 complete:(id /* block */)a5;
- (id /* block */)oldEditorBeforePublish:(id /* block */)a0 complete:(id /* block */)a1;
- (void)oldEditorWithModel:(id)a0 pageComplete:(id /* block */)a1 progressBlock:(id /* block */)a2 complete:(id /* block */)a3;
- (void)trackPicEditFinishEvent:(id)a0;
- (void)uploadImageWithModel:(id)a0 imageList:(id)a1 startLoadTime:(id)a2 pickEventData:(id)a3 pageComplete:(id /* block */)a4 progressBlock:(id /* block */)a5 complete:(id /* block */)a6;
- (void)__exportImageWithEditService:(id)a0 complete:(id /* block */)a1;
- (id /* block */)infiniEditorBeforePublish:(id /* block */)a0 complete:(id /* block */)a1;
- (void)infiniEditorWithModel:(id)a0 pageComplete:(id /* block */)a1 progressBlock:(id /* block */)a2 complete:(id /* block */)a3;
- (id)fetchImageTrackInfos:(id)a0;
- (void)__infiniExportImageWithPublishModel:(id)a0 complete:(id /* block */)a1;
- (void)p_exportStickerImagesAndRawImagesFrom:(id)a0 toPOICommentList:(id)a1;
- (void)__uploadWithImageList:(id)a0 progressBlock:(id /* block */)a1 start:(id)a2 from:(id)a3;
- (long long)p_stickersTextCountInPublishModel:(id)a0;
- (long long)p_stickersCountInPublishModel:(id)a0;
- (BOOL)p_isUsingFileterInPublishModel:(id)a0;
- (BOOL)p_isUsingHDRInPublishModel:(id)a0;
- (void)p_infiniExportStickerImagesAndRawImagesFrom:(id)a0 toPOICommentList:(id)a1;
- (id)p_exportAttachedInfoFromAlbumItem:(id)a0 taskID:(id)a1;
- (id)p_imageAtFilePath:(id)a0;
- (id)exportAttachedInfoFromProject:(id)a0;
- (id /* block */)assertBeforePublish:(id /* block */)a0 complete:(id /* block */)a1;
- (id)externalRecorderViewController:(id)a0 complete:(id /* block */)a1;
- (void)__oldEditConfigWithPublishModel:(id)a0 isRestore:(BOOL)a1 needMusic:(BOOL)a2 scrollToIndex:(long long)a3 progressBlock:(id /* block */)a4 complete:(id /* block */)a5;
- (BOOL)hasEdits:(id)a0;
- (void)p_oldExportStickerImagesAndRawImagesFrom:(id)a0 toPOICommentList:(id)a1;
- (void).cxx_destruct;
- (void)getCurrentLocationWithCompletion:(id /* block */)a0;

@end
