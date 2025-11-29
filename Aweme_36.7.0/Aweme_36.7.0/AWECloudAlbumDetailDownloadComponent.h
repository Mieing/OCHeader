@class AWECloudAlbumDetailDownloadViewModel, AWECloudAlbumDetailDownloadHandler, NSString;
@protocol AWECloudAlbumDetailAlertServiceProtocol;

@interface AWECloudAlbumDetailDownloadComponent : AWECloudAlbumDetailBaseComponent <AWECADDHandlerDelegate, AWECADDHandlerDataSource>

@property (weak, nonatomic) id<AWECloudAlbumDetailAlertServiceProtocol> alertService;
@property (retain, nonatomic) AWECloudAlbumDetailDownloadViewModel *viewModel;
@property (retain, nonatomic) AWECloudAlbumDetailDownloadHandler *handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)serviceBinding;
- (void)componentDidLoad;
- (void)download_shouldExitSelectMode;
- (id)download_client;
- (id)download_taskKey;
- (id)download_containerView;
- (id)download_createAlertView;
- (void).cxx_destruct;

@end
