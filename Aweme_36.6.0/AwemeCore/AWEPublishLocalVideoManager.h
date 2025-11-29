@class NSDateFormatter, NSMutableDictionary, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface AWEPublishLocalVideoManager : NSObject <AWEUserMessage>

@property (retain, nonatomic) NSDateFormatter *dateFormatter;
@property (nonatomic) double currentStorageUsage;
@property (retain, nonatomic) NSMutableDictionary *storedVideos;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) long long localVideoValidSpan;
@property (nonatomic) long long localVideoStorageSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)validLocalCoverImageWithAwemeID:(id)a0 videoURI:(id)a1;
+ (void)removeLocalCoverImageWithAwemeID:(id)a0 videoURI:(id)a1;
+ (id)validLocalMeteorBlurCoverImageWithAwemeID:(id)a0 videoURI:(id)a1;
+ (void)removeLocalMeteorBlurCoverImageWithAwemeID:(id)a0 videoURI:(id)a1;
+ (id)validLocalVideoStorageURLWithAwemeID:(id)a0 awemeModel:(id)a1 videoURI:(id)a2;
+ (void)clearAllCachedVideoWithScene:(id)a0;
+ (double)currentStorageUsage;
+ (id)validLocalVideoStorageURLWithAwemeID:(id)a0 awemeModel:(id)a1 videoURI:(id)a2 createTime:(id)a3 scene:(id)a4 error:(id *)a5;
+ (id)validLocalVideoStorageURLWithAwemeID:(id)a0 awemeModel:(id)a1 videoURI:(id)a2 createTime:(id)a3 creatorUid:(id)a4 scene:(id)a5 error:(id *)a6;
+ (void)storePublishVideoCover:(id)a0 awemeID:(id)a1 videoURI:(id)a2;
+ (void)storePublishVideoWithURL:(id)a0 withAwemeID:(id)a1 videoURI:(id)a2;
+ (void)storeAwemeCacheInvalidInfoWithAwemeID:(id)a0 errorCode:(long long)a1 extraErrorMsg:(id)a2;
+ (id)fetchOriginAsset:(id)a0 error:(id *)a1 extra:(id)a2 videoURI:(id)a3;
+ (void)setExternalError:(id *)a0 errorCode:(long long)a1 extraErrorMsg:(id)a2;
+ (void)debug_copyFileFailed:(id)a0;
+ (id)validLocalVideoStorageURLWithAwemeID:(id)a0 awemeModel:(id)a1 videoURI:(id)a2 creatorUid:(id)a3;
+ (void)storePublishVideoMeteorBlurCover:(id)a0 awemeID:(id)a1 videoURI:(id)a2;
+ (void)debug_onlyRemoveAwemeIDFromStoredVideos:(id)a0;
+ (void)debug_onlyRemoveURIFromStoredVideos:(id)a0;
+ (id)sharedManager;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)onAwemeDelete:(id)a0;
- (void)restoreVideosFromCacheFile;
- (void)removePublishVideoWithAwemeID:(id)a0;
- (id)localVideoStorageURLWithAwemeID:(id)a0;
- (id)saveDateForAwemeID:(id)a0;
- (double)timeIntervalForAwemeID:(id)a0;
- (void)writeVideoMapsToFile;
- (id)retrieveRelatedVideoWithAwemeID:(id)a0 error:(id *)a1;
- (double)localFileSizeForAwemeID:(id)a0;
- (id)coverPathWithAwemeId:(id)a0 videoURI:(id)a1;
- (id)meteorBlurCoverPathWithAwemeId:(id)a0 videoURI:(id)a1;
- (id)localVideoStoragePath;
- (id)getVideosCachePath;
- (BOOL)checkFileExistsAtPath:(id)a0;
- (BOOL)checkValidTimeForAwemeID:(id)a0;
- (void)syncInitStoredVideos;
- (BOOL)checkValidTimeWithCreateTime:(double)a0;
- (void)applicationWillResignActive:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addObserver;
- (void)dealloc;
- (BOOL)deleteFileAtPath:(id)a0;
- (void)removeObserver;
- (double)fileSizeForURL:(id)a0;

@end
