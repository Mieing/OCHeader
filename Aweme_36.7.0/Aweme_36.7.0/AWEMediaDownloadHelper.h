@class NSString;

@interface AWEMediaDownloadHelper : NSObject <AWEMediaDownloadHelper>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)checkIfCanDownloadWithOptions:(id)a0;
+ (void)copyLinkIfPreventDownloadTypeReviewing:(id)a0;
+ (void)saveVideoToAlbum:(id)a0 needAsset:(BOOL)a1 completion:(id /* block */)a2;
+ (void)cleanCacheIfNeeded;
+ (id)formatedFreeSpaceWithHomePath;
+ (long long)freeDiskSpaceInBytesWithHomePath;
+ (float)totalDiskSpaceInBytes;
+ (id)_humanReadableStringFromBytes:(unsigned long long)a0;
+ (long long)freeDiskSpaceInBytes;
+ (id)formatedTotalSpace;
+ (id)formatedFreeSpace;
+ (void)logSaveFailWithMessage:(id)a0 error:(id)a1 urlList:(id)a2;
+ (id)forbiddenDownloadMessageWithOptions:(id)a0;
+ (void)p_recordControlServerDiffWithMessage:(id)a0;


@end
