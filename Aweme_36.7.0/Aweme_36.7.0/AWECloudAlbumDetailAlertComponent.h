@class NSString, NSHashTable;
@protocol AWECloudAlbumDetailDataServiceProtocol;

@interface AWECloudAlbumDetailAlertComponent : AWECloudAlbumDetailBaseComponent <AWECloudAlbumDetailAlertServiceProtocol, AWECloudAlbumDetailDataAlbumServiceSubscriber>

@property (weak, nonatomic) id<AWECloudAlbumDetailDataServiceProtocol> dataService;
@property (retain, nonatomic) NSHashTable *alerts;
@property (nonatomic) BOOL albumDeletedAlertShouldShow;
@property (nonatomic) BOOL albumDeletedAlertDidShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidAppear;
- (BOOL)canShowAlert;
- (id)serviceBinding;
- (void)componentDidLoad;
- (id)createAlertView;
- (void)p_showAlbumDeletedAlertIfNeeded;
- (void)dataDidChangeAlbumWithService:(id)a0;
- (void).cxx_destruct;

@end
