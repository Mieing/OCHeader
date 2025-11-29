@class NSString, MMKV, AWELeftSideBarUserBannerExitInfo;

@interface AWELeftSideBarBannerExitManager : NSObject <AWEUserMessage>

@property (retain, nonatomic) MMKV *mmKvStorage;
@property (retain, nonatomic) AWELeftSideBarUserBannerExitInfo *userBannerExitInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)p_createBannerExitInfoIfNeededWithBusinessID:(id)a0 endTime:(double)a1;
- (void)p_saveUserExitInfo;
- (id)p_bannerExitInfoWithBusinessID:(id)a0;
- (void)p_loadMMKVStorage;
- (void)p_loadCurrentUserExitInfo;
- (void)p_filterExitInfoInValidPeriod;
- (id)p_currentUserID;
- (id)p_userBannerExitInfoKeyWithUserID:(id)a0;
- (double)p_currentServerTime;
- (void)bannerCellDidReceiveDataWithBusinessID:(id)a0 endTime:(double)a1;
- (void)bannerCellDidShowWithBusinessID:(id)a0;
- (void)bannerCellDidClickCloseWithBusinessID:(id)a0;
- (void)bannerCellDidClickWithBusinessID:(id)a0;
- (unsigned long long)shouldExitWithBusinessID:(id)a0 showCountThreshold:(long long)a1;
- (void)clearCacheData;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
