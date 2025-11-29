@class NSDate;

@interface AWEPOIUGCAlbumViewModel : AWEAlbumBaseViewModel

@property (retain, nonatomic) NSDate *startNextTime;
@property (nonatomic) BOOL dismissed;

- (void)goToNextWithMultiSelect:(BOOL)a0;
- (void)p_dismissSelf:(id)a0;
- (void)fetchSlidesCoverWithAssetModels:(id)a0 workspace:(id)a1 withResultBlock:(id /* block */)a2;
- (void)__finishSelectedWithAssets:(id)a0 publishModel:(id)a1;
- (void)__openEditorWithAssets:(id)a0 publishModel:(id)a1;
- (void)__finishInfiniSelectedWithAssets:(id)a0 publishModel:(id)a1;
- (void)uploadImageWithPublishModel:(id)a0;
- (void)trackEnterEditFromAlbum;
- (void)trackTransferStatus:(id)a0;
- (id)rootPresentingViewController:(id)a0;
- (void)__openInfiniEditorWithAssets:(id)a0 publishModel:(id)a1;
- (void)__finishOldSelectedWithAssets:(id)a0 publishModel:(id)a1;
- (void)__openOldEditorWithAssets:(id)a0 publishModel:(id)a1;
- (void).cxx_destruct;

@end
