@class NSString;

@interface AWEACCFriendsServiceImpl : NSObject <ACCFriendsServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addActivityNameTrackParamsTo:(id)a0 forShootEnterFrom:(id)a1;
- (id)publishPrivacySecurityManager;
- (BOOL)shouldShowStoryRing;
- (BOOL)isCFMoment:(id)a0;
- (BOOL)isTextStickerShortcutEnabled;
- (id)getLatestWatchedMaskIDList;
- (BOOL)isEnableCloseFriendsFeature;
- (struct { BOOL x0; BOOL x1; long long x2; BOOL x3; BOOL x4; double x5; BOOL x6; struct CGSize { double x0; double x1; } x7; double x8; double x9; })singlePhotoOptimizationABTesting;
- (double)enterQuickRecordInFamiliarDateDiff;
- (id)newACCTextModeBackgroundManager;
- (BOOL)shouldUseMVMusicForSinglePhoto;
- (void)fetchFriendsListDataWithCount:(long long)a0 completion:(id /* block */)a1;
- (void)switchGlobalMuteStatus:(BOOL)a0 scene:(long long)a1;
- (id)recorderStoryRingView;
- (void)fetchUserQRCodeImageUrlForStickerCompletion:(id /* block */)a0;
- (BOOL)enableQuickShareTrimTextOpt;

@end
