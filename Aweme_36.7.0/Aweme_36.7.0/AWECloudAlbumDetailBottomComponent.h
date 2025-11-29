@class NSString, AWECloudAlbumDetailBottomViewModel, AWECloudAlbumDetailBottomView, EcAsset;
@protocol AWECloudAlbumDetailPublishServiceProtocol, AWECloudAlbumDetailListServiceProtocol, AWECloudAlbumDetailAlertServiceProtocol, AWECloudAlbumDetailDownloadServiceProtocol, AWECloudAlbumDetailDataServiceProtocol;

@interface AWECloudAlbumDetailBottomComponent : AWECloudAlbumDetailBaseComponent <AWECloudAlbumDetailBottomSelectViewDelegate, AWECloudAlbumDetailDataTaskServiceSubscriber, AWECloudAlbumDetailListServiceSubscriber>

@property (weak, nonatomic) id<AWECloudAlbumDetailDataServiceProtocol> dataService;
@property (weak, nonatomic) id<AWECloudAlbumDetailListServiceProtocol> listService;
@property (weak, nonatomic) id<AWECloudAlbumDetailDownloadServiceProtocol> downloadService;
@property (weak, nonatomic) id<AWECloudAlbumDetailAlertServiceProtocol> alertService;
@property (weak, nonatomic) id<AWECloudAlbumDetailPublishServiceProtocol> publishService;
@property (retain, nonatomic) AWECloudAlbumDetailBottomViewModel *viewModel;
@property (retain, nonatomic) AWECloudAlbumDetailBottomView *bottomView;
@property (retain, nonatomic) EcAsset *curUploadProcessingAsset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)serviceBinding;
- (void)componentDidLoad;
- (void)p_updateBottomStateAnimated:(BOOL)a0;
- (void)p_updateSelectViewState;
- (void)selectViewDidTapPublish:(id)a0;
- (void)selectViewDidTapSave:(id)a0;
- (void)selectViewDidTapDelete:(id)a0;
- (void)dataDidChangeTaskStatusWithService:(id)a0;
- (void)dataDidChangeTaskProgressWithService:(id)a0;
- (void)dataService:(id)a0 didChangeItems:(id)a1;
- (void)listDidChangeDataWithService:(id)a0;
- (void)listDidChangeSelectModeWithService:(id)a0;
- (void)listDidChangeSelectionWithService:(id)a0;
- (void).cxx_destruct;

@end
