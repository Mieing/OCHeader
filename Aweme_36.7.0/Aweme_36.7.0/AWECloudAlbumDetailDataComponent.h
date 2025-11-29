@class AWECloudAlbumDetailDataViewModel, NSString;
@protocol AWECloudAlbumDetailAlertServiceProtocol, AWECloudAlbumDetailListServiceProtocol;

@interface AWECloudAlbumDetailDataComponent : AWECloudAlbumDetailBaseComponent <EcAlbumChangeDelegagte, EcTaskChangeProtocol>

@property (retain, nonatomic) AWECloudAlbumDetailDataViewModel *viewModel;
@property (weak, nonatomic) id<AWECloudAlbumDetailAlertServiceProtocol> alertService;
@property (weak, nonatomic) id<AWECloudAlbumDetailListServiceProtocol> listService;
@property (nonatomic) BOOL isShowingAlert;
@property (nonatomic) BOOL isUploading;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)maxGiBText;

- (void)componentWillAppear;
- (id)serviceBinding;
- (void)albumChanges:(id)a0;
- (void)albumDelChanges:(id)a0;
- (void)taskItemChanges:(id)a0;
- (void)taskProgressChanges:(id)a0;
- (void)taskStateChanges:(id)a0;
- (void)componentDidLoad;
- (void)networkStateChange;
- (id)p_stringWithTask:(id)a0;
- (id)p_stringWithProgress:(id)a0;
- (id)p_stringWithItem:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
