@class NSString;

@interface AWEFeedExperienceModuleService : HTSService <AWEFeedExperienceModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)checkLeftSpaceEnough;
- (void)setLastUseFeedCacheUserID:(id)a0;
- (id)lastUseFeedCacheUserID;
- (void)setReleaseGoldenHouseVideos:(id)a0;
- (id)releaseGoldenHouseVideos;
- (Class)preloaderWrapperClass;
- (BOOL)enableCacheFeedDowngradeSR;
- (id)getFeedCacheBsModelWith:(id)a0;
- (id)identifierWithModel:(id)a0 forType:(long long)a1;
- (id)createIndividualPlayController;
- (void)individualPreparePlay:(id)a0 model:(id)a1 enableLoading:(BOOL)a2;
- (BOOL)individualPlay:(id)a0;
- (void)individualPause:(id)a0;
- (id)currentAwemeModelInFeedTableVC;

@end
