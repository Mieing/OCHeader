@class NSString, NSDictionary;
@protocol Optional;

@interface TTDownloadTrackModel : JSONModel

@property double curStartTime;
@property long long curFgDownloadBytes;
@property double curBgStartTime;
@property (copy) NSString *downloadId;
@property (copy) NSString *fileStorageDir;
@property (copy) NSString<Optional> *md5Value;
@property double md5Time;
@property (copy) NSString<Optional> *url;
@property (copy) NSString<Optional> *secondUrl;
@property (copy) NSString<Optional> *name;
@property double downloadTime;
@property long long totalBytes;
@property long long curBytes;
@property long long sliceCount;
@property long long urlRetryCount;
@property long long curUrlRetryTime;
@property double urlRetryInterval;
@property double gclTime;
@property long long retryCount;
@property long long curRetryTime;
@property double sliceMergeTime;
@property long long restoreCount;
@property long long curRestoreTime;
@property double retryInterval;
@property double retryIntervalIncrement;
@property BOOL httpsDegradeEnable;
@property BOOL hasHttpsDegrade;
@property long long throttleNetSpeed;
@property long long failStatus;
@property (copy) NSString<Optional> *failMsg;
@property BOOL isWifiOnly;
@property BOOL isBgDownloadEnable;
@property BOOL isBackgroundDownloadFinish;
@property double bgDownloadTime;
@property long long curBgDownloadBytes;
@property float downloadSpeed;
@property long long trackStatus;
@property long long realDownloadLength;
@property long long downloadedLenInit;
@property BOOL isRestore;
@property (copy) NSString *pcdnLog;
@property BOOL isLittleFile;
@property double cacheLifeTimeMax;
@property BOOL isSkipGCL;
@property char urlsCount;
@property (copy) NSDictionary<Optional> *extraParams;
@property BOOL isLastRetryEnable;
@property BOOL isHttp1ProtocolEnable;
@property BOOL isLastRetryFinished;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)generateDownloadIdWithUrl:(id)a0 fileName:(id)a1;

- (void)addBgDownloadBytes:(long long)a0;
- (void)addCurUrlRetryTime:(long long)a0;
- (void)calculateInternal;
- (void)recordFgDownloadBytes;
- (void)setBgDownloadStartTime;
- (double)addBgDownloadTimeWithReSet;
- (void)addCurRestoreTime:(long long)a0;
- (double)addDownloadTime;
- (void)addCurRetryTime:(long long)a0;
- (double)addDownloadTimeWithReSet;
- (void)calBgDownloadBytes;
- (void).cxx_destruct;
- (id)init;
- (void)setDownloadStartTime:(double)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
