@class NSString;

@interface AWERecordModeHelperImpl : NSObject <ACCRecordModeHelperProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isTakingPicturingModeSupportShootingVideoWithModeId:(long long)a0;
- (BOOL)shouldSwapPhotoModeAndVideoMode;
- (BOOL)isDefaultToPhotoModeForEveryLanding;
- (BOOL)isOnlyStoreRecordModeInPlusEntranceABOn;
- (long long)getCachedStoryCombinedRecordMode;
- (BOOL)isDefaultToPhotoModeForFirstLanding;
- (void)markFirstLandingHasLandedToPhotoMode;
- (long long)getCachedCombinedRecordMode;
- (BOOL)isValidYoungerThan24User;
- (id)appendUserIdToKey:(id)a0;
- (BOOL)isStoreCombinedRecordModeABOn;
- (long long)getCachedRecordModeForKey:(id)a0;
- (void)storeRecordModeIntoCacheIfNeeded:(id)a0;
- (BOOL)isStoreStoryCombinedRecordModeABOn;

@end
