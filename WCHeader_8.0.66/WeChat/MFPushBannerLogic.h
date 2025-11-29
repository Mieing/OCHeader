@class MFBannerBtn, NSString;
@protocol MFPushBannerDelegate;

@interface MFPushBannerLogic : MMObject <BannerToastExt, IHeadImageExt, MMKernelExt>

@property (readonly, nonatomic) MFBannerBtn *bannerBtn;
@property (weak, nonatomic) id<MFPushBannerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)createBannerBtn;
- (void)initBindPhoneBtn;
- (void)initUploadContactBtn;
- (void)initAddBookPermissonBtn;
- (void)initSetHeadBtn;
- (void)initOpenStickerShopBtn;
- (void)initOpenGameBtn;
- (void)initOpenMassSendBtn;
- (void)initOpenMomentBtn;
- (void)initRecommandSurroundingBtn;
- (void)showBannerBtn:(int)a0;
- (void)bindPhone:(id)a0;
- (void)openPermission:(id)a0;
- (void)uploadContact:(id)a0;
- (void)checkSurroundingPeople:(id)a0;
- (void)setHeaderImage:(id)a0;
- (void)jumpToStickerShop:(id)a0;
- (void)jumpToGame:(id)a0;
- (void)jumpToMoment:(id)a0;
- (void)openMassSend:(id)a0;
- (void)updatePushBanner;
- (void)onHeadImageChange:(id)a0;
- (void)onBannerUpdate;
- (void)onReceiveNewFriendRecommandMsg:(id)a0;
- (void)onReceiveSecurityBannerMsg:(id)a0;
- (void)onInitOK;
- (void).cxx_destruct;

@end
