@class NSString, NSMutableDictionary, AWEMediaDownloadInfo;
@protocol AWEStorageServiceFileKitResourceMetricInterface;

@interface AWESharePanelDownloadManager : NSObject <AWESharePanelDownload>

@property (copy, nonatomic) id /* block */ progressBlock;
@property (copy, nonatomic) id /* block */ resultBlock;
@property (retain, nonatomic) NSMutableDictionary *feedVideoCachedFileURLs;
@property (retain, nonatomic) NSMutableDictionary *downloadTypeDic;
@property (retain, nonatomic) AWEMediaDownloadInfo *downloadInfo;
@property (nonatomic) double progress;
@property (retain, nonatomic) id<AWEStorageServiceFileKitResourceMetricInterface> resourceMetric;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)cancelDownloadWithAwemeModel:(id)a0;
+ (unsigned long long)getCurrentDownloadStatus:(id)a0;
+ (BOOL)localCachedFileAlreadyExistForAwemeID:(id)a0;
+ (id)feedCachedFileURLForAwemeID:(id)a0;
+ (void)toastDownloadFinish;
+ (void)toastAlreadyDownloaded;
+ (void)toastOtherDownloading;
+ (id)destinationURLForURI:(id)a0;
+ (id)downloadWithOptions:(id)a0 progressBlock:(id /* block */)a1 resultBlock:(id /* block */)a2;
+ (id)getShareChannelResourceMetric;
+ (BOOL)isShareOffsite:(id)a0;
+ (void)setShareOffsite:(BOOL)a0 forAwemeID:(id)a1;
+ (void)clearCache;
+ (id)sharedInstance;

- (id)p_downloadWithOptions:(id)a0 progressBlock:(id /* block */)a1 resultBlock:(id /* block */)a2;
- (void)p_cancelDownloadWithAwemeModel:(id)a0;
- (unsigned long long)p_getCurrentDownloadStatus:(id)a0;
- (BOOL)p_localCachedFileAlreadyExistForAwemeID:(id)a0;
- (id)p_feedCachedFileURLForAwemeID:(id)a0;
- (void)p_clearCache;
- (BOOL)p_isShareOffsite:(id)a0;
- (void)p_setShareOffsite:(BOOL)a0 forAwemeID:(id)a1;
- (void)p_recordCachedFileURL:(id)a0 forAwemeID:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
