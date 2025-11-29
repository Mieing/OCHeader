@class NSString;

@interface AWEStudioLiveServiceImpl : NSObject <AWEStudioLiveServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hasCreatedLiveRoom;
- (BOOL)hasEnteredLiveRoom;
- (BOOL)canBeLivePodcast;
- (void)checkLivePermission:(id /* block */)a0;
- (void)checkBlessingStickerExistsWithCompleteBlock:(id /* block */)a0;
- (void)requestCreateInfo:(id)a0 completion:(id /* block */)a1;
- (void)trackEnterLiveMode:(id)a0;
- (void)checkHasSameStickerWithSticker:(id)a0 completeBlock:(id /* block */)a1;
- (void)showAddressListAuthorizationOnLiveViewController:(id)a0;
- (id)liveCameraWithRecorder:(id)a0;
- (id)getLiveEntranceViewControllerWithHolderController:(id)a0 containerView:(id)a1 sourceParam:(id)a2 trackParams:(id)a3 extraParams:(id)a4 openLiveModel:(id)a5;
- (void)setClickShootToLive:(BOOL)a0;
- (BOOL)clickShootToLive;
- (id)liveWaterMarkImageWithPublishModel:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)createLiveTitleExtraForModel:(id)a0;

@end
