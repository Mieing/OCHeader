@class AWECloudAlbumDetailPublishViewModel, AWECloudAlbumDetailPublishProcessor, NSString;

@interface AWECloudAlbumDetailPublishComponent : AWECloudAlbumDetailBaseComponent <AWECloudAlbumPublishProcessorDataSource, AWECloudAlbumPublishProcessorDelegate>

@property (retain, nonatomic) AWECloudAlbumDetailPublishViewModel *viewModel;
@property (retain, nonatomic) AWECloudAlbumDetailPublishProcessor *publishProcessor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)serviceBinding;
- (void)componentDidLoad;
- (id)publishContainerView;
- (id)downloadClient;
- (id)downloadTaskKey;
- (void)assetsPublishFinish;
- (void).cxx_destruct;

@end
