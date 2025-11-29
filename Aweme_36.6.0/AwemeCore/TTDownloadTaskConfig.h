@class DownloadGlobalParameters, NSString, NSDictionary, TTDownloadTaskExtendConfig, NSMutableArray;

@interface TTDownloadTaskConfig : NSObject

@property (copy) NSString *urlKey;
@property (copy) NSString *secondUrl;
@property (copy) NSString *fileStorageName;
@property (copy) NSString *fileStorageDir;
@property long long downloadStatus;
@property (nonatomic) NSDictionary *extraEventParams;
@property (retain) NSMutableArray *downloadSliceTaskConfigArray;
@property (copy, nonatomic) NSString *md5Value;
@property (nonatomic) char sliceTotalNeedDownload;
@property (nonatomic) char isSupportRange;
@property char restoreTimesAuto;
@property BOOL isAutoRestore;
@property short versionType;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (copy, nonatomic) id /* block */ resultBlock;
@property (retain) DownloadGlobalParameters *userParam;
@property (retain) TTDownloadTaskExtendConfig *extendConfig;
@property BOOL isEnableWhenLru;
@property (retain) NSDictionary *responseHeaders;

- (long long)getTotalLength;
- (void)clearUserBlock;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
