@class NSMutableDictionary;

@interface VEFileDownloaderManager : NSObject

@property (copy, nonatomic) NSMutableDictionary *downloaderMap;

+ (id)fileCacheWithURL:(id)a0 cacheDir:(id)a1;
+ (BOOL)checkFileValid:(id)a0;
+ (id)fileCacheWithUrlKey:(id)a0 cacheDir:(id)a1 urlKey:(id)a2;
+ (id)sharedInstance;

- (void)appWillTerminateNotification;
- (void)stopFileDownloadWithURL:(id)a0;
- (id)fetchFileDownloadWithURL:(id)a0;
- (id)createDownloadWithConfig:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)addNotificationObservers;
- (void)dealloc;

@end
