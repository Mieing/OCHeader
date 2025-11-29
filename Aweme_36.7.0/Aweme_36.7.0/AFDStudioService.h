@class NSString;

@interface AFDStudioService : HTSService <AFDStudioService>

@property (nonatomic) int sharedImageAlbumIndex;
@property (copy, nonatomic) id /* block */ getCurImageAlbumIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)recordSharedImageAlbumIndex;
- (void)recordSharedImageAlbumIndexWithAweme:(id)a0;
- (int)sharedAsStoryImageAlbumIndex;
- (id)createSameStyleShootView;
- (id)createStoryStickerGuideViewController;
- (Class)storyStickerGuideViewControllerClass;
- (void)prefethchEffectWithPanel:(id)a0;
- (void)preloadHotMusic;
- (void)fetchStickerResourceWithPanel:(id)a0 category:(id)a1 completion:(id /* block */)a2;
- (void)createStoryWithAvatar:(id)a0 nickname:(id)a1 avatarUri:(id)a2 info:(id)a3 done:(id /* block */)a4;
- (BOOL)isYoung;
- (id)publishConfirmViewController;
- (id)createPublishConfirmViewControllerWithCenterImage:(id)a0;
- (id)createPublishConfirmViewControllerWithCenterImage:(id)a0 trackParams:(id)a1;
- (void)fetchBackgroundImageDerivedFromAvatar:(id /* block */)a0;
- (Class)birthdayManagerClass;
- (Class)birthdayPopupClass;
- (id)createBirthdayPanelView;
- (BOOL)hasCloseFriends;
- (id)outerForwardText;
- (void)saveToLocalAsset:(id)a0 done:(id /* block */)a1;
- (id)p_dateFormat;
- (long long)getUserAge:(id)a0;
- (void).cxx_destruct;

@end
