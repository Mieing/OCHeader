@class IESLiveAnchorPictureAirPlayApi, NSString, NSHashTable, IESLiveAnchorPictureAirPlayInstance;
@protocol IESLivePhotoLibraryService;

@interface IESLiveAnchorPictureAirPlayServiceImpl : IESLiveGeneralBaseService <IESLiveAnchorPictureAirPlayService, IESLiveAnchorPictureAirPlayInstanceDelegate>

@property (retain, nonatomic) IESLiveAnchorPictureAirPlayApi *api;
@property (retain, nonatomic) id<IESLivePhotoLibraryService> photoLibraryService;
@property (retain, nonatomic) IESLiveAnchorPictureAirPlayInstance *activeAirPlayInstance;
@property (retain, nonatomic) IESLiveAnchorPictureAirPlayInstance *pendingAirPlayInstance;
@property (retain, nonatomic) NSHashTable *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;

- (void)serviceDidLaunch;
- (BOOL)serviceNeedBringInAnchorRoom;
- (void)serviceUninstall;
- (void)trackEvent:(id)a0 extraParams:(id)a1;
- (void)addPictureAirPlayObserver:(id)a0;
- (void)removePictureAirPlayObserver:(id)a0;
- (void)handleAuditResultMessage:(id)a0;
- (void)syncPictureAirPlayCloseStatusIfNeeded;
- (void)fetchAuditResultIfNeeded;
- (BOOL)isPictureAirPlaying;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })pictureAirPlayPreviewFrame;
- (void)openPictureAirPlayAlbumPage;
- (void)openPictureAirPlayPermissionPage;
- (void)fetchPermissionWithCompletion:(id /* block */)a0;
- (void)openPictureAirPlayManagePage;
- (struct CGSize { double x0; double x1; })pictureAirPlayCameraSize;
- (void)openPictureAirPlayWithLaunchModel:(id)a0;
- (void)switchPictureAirPlayWithLaunchModel:(id)a0;
- (void)closePictureAirPlay;
- (BOOL)isInGuidePage;
- (void)pictureAirPlayInstanceStateDidChange:(id)a0;
- (BOOL)pictureAirPlayInstanceIsInGuidePage:(id)a0;
- (id)roomForPictureAirPlayInstance:(id)a0;
- (id)apiForPictureAirPlayInstance:(id)a0;
- (id)toastFactoryForPictureAirPlayInstance:(id)a0;
- (id)popupContainerForPictureAirPlayInstance:(id)a0;
- (void)openPictureAirPlayAlbumPageWithOpenType:(long long)a0;
- (void)trackPictureAirPlayManagePageClick:(id)a0;
- (void)trackPictureAirPlayState:(id)a0;
- (void)handlePictureAirPlayState:(id)a0;
- (void)openOrSwitchAirPlayInstance:(id)a0;
- (void)cleanupAirPlayInstance:(id)a0;
- (void)didCloseAirPlayInstance:(id)a0;
- (void)didOpenAirPlayInstance:(id)a0;
- (void)didSwitchAirPlayInstanceFrom:(id)a0 to:(id)a1;
- (void).cxx_destruct;

@end
