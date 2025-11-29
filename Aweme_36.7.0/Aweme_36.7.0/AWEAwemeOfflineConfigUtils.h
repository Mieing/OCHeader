@class NSString;

@interface AWEAwemeOfflineConfigUtils : NSObject <AWEAwemeOfflineConfigUtilsProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)hasEnteredOfflineMode;
+ (void)setLastUseFeedCacheUserID:(id)a0;
+ (id)lastUseFeedCacheUserID;
+ (void)setReleaseGoldenHouseVideos:(id)a0;
+ (id)releaseGoldenHouseVideos;
+ (void)setSettingsAutoWifiUpdate:(BOOL)a0;
+ (void)setCurrentVideoIndex:(long long)a0;
+ (BOOL)cleanByExpired;
+ (long long)shouldDownloadCount;
+ (void)setIsInOfflineMode:(BOOL)a0;
+ (long long)cachedVideoOccupiedDisk;
+ (double)lastEnterOfflineModeTime;
+ (void)updateLastEnterOfflineModeTime;
+ (void)setCleanByExpired:(BOOL)a0;
+ (BOOL)settingsAutoWifiUpdate;
+ (BOOL)isNotFirstDownload;
+ (BOOL)isInOfflineMode;
+ (void)setCachedVideoOccupiedDisk:(long long)a0;
+ (void)setShouldDownloadCount:(long long)a0;
+ (id)currentVideoItemID;
+ (void)setCurrentVideoItemID:(id)a0;
+ (id)lastUseOfflineUserID;
+ (void)setLastUseOfflineUserID:(id)a0;
+ (void)setHasEnteredOfflineMode:(BOOL)a0;
+ (void)setSettingsCellIndex:(long long)a0;
+ (id)playedVideoItemIDs;
+ (void)setPlayedVideoItemIDs:(id)a0;
+ (void)setLastOfflineDownloadCount:(long long)a0;
+ (long long)settingsCellIndex;
+ (long long)lastOfflineDownloadCount;
+ (long long)CurrentVideoIndex;
+ (void)setIsNotFirstDownload:(BOOL)a0;
+ (void)setHasExposuredOfflineMode:(BOOL)a0;
+ (BOOL)hasExposuredOfflineMode;
+ (void)setCanDownloadViaWWAN:(BOOL)a0;
+ (BOOL)canDownloadViaWWAN;


@end
