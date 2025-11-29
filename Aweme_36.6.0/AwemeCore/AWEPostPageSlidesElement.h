@class NSString, ACCSequenceAlbumHandler, ACCImageAlbumThumbnailListDeleteView, AWEPublishSlidesTableViewCell;
@protocol ACCEditServiceProtocol, ACCSequenceEditServiceProtocol;

@interface AWEPostPageSlidesElement : AWEPostPageCellElement <ACCSequencePreviewViewDelegate, AWEPublishSlidesTableViewCellDelegate, AWEPostPagePreviewElementProtocol, ACCSequenceAlbumHandlerDelegateProtocol>

@property (retain, nonatomic) AWEPublishSlidesTableViewCell *slidesCell;
@property (retain, nonatomic) ACCImageAlbumThumbnailListDeleteView *deleteView;
@property (retain, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (retain, nonatomic) ACCSequenceAlbumHandler *albumHandler;
@property (nonatomic) BOOL coverBindFirstImage;
@property (nonatomic) long long dragFromIdx;
@property (nonatomic) BOOL firstAppear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterPostPage;
+ (Class)featureConfigClass:(id)a0;
+ (id)type;

- (id)commonTrackInfo;
- (id)anchorService;
- (id)navigationBarService;
- (void)didClickToAdjustSlidesVideoDurationWithProjectUUID:(id)a0;
- (void)sequencePreviewDidEndScrolling:(id)a0;
- (void)sequencePreviewDidScroll:(id)a0;
- (void)sequencePreview:(id)a0 selectItemAtIndex:(long long)a1;
- (void)sequencePreviewClickAddItem:(id)a0;
- (void)sequencePreview:(id)a0 switchIndexFrom:(long long)a1 to:(long long)a2;
- (void)sequencePreview:(id)a0 beginDraggingAtIndex:(long long)a1;
- (void)sequencePreview:(id)a0 deleteItemAtIndex:(long long)a1;
- (void)sequencePreview:(id)a0 endDraggingAtIndex:(long long)a1;
- (id)reeditService;
- (void)trackOpenAlbumViewController;
- (void)sequencePreview:(id)a0 didChangePlayStatus:(BOOL)a1;
- (id)projectForUUID:(id)a0;
- (void)sequencePreviewSwipeUpGesture;
- (BOOL)_isNewProjectsChanged:(id)a0;
- (void)replaceWorkspace;
- (void)updateWithCoverImage:(id)a0 isFromChooseCover:(BOOL)a1 isFromPreview:(BOOL)a2 animated:(BOOL)a3;
- (void)replaceOriginWithProjects:(id)a0;
- (void)_resetFirstItemAsCover:(id)a0 completion:(id /* block */)a1;
- (void)_resetPreUploadTaskIfNeed;
- (id)slidesHandler;
- (void)_handleCoverWithNewProjects:(id)a0 completion:(id /* block */)a1;
- (void)enterEditPage:(long long)a0;
- (void)trackItemClickWith:(id)a0;
- (void)trackNoteAutoCropShowToast;
- (void)createDeleteViewIfNeeded;
- (void)trackItemDraggingWith:(id)a0;
- (void)updateDataWithPublishModel:(id)a0 backPublish:(BOOL)a1 completion:(id /* block */)a2;
- (void)trackEnterEditPage;
- (void)movePreviewClipFromIndex:(long long)a0 toIndex:(long long)a1 needReload:(BOOL)a2;
- (void)updateWithCoverImage:(id)a0 isFromChooseCover:(BOOL)a1 isFromPreview:(BOOL)a2;
- (void)reloadPreview;
- (void)slidesCellDidTapChooseCover:(id)a0;
- (void)prefetchImageCoverTemplatesIfNecessary:(id)a0;
- (void)navigateToReeditPreview;
- (void)setAnchorInfoIfNeededForImageAlbumAsNoteStyle;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isVisible;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (id)cell;

@end
