@class NSString, NSMutableArray, TTDownloadTrackModel;

@interface DownloadResultNotification : NSObject

@property (copy) NSString *urlKey;
@property (copy) NSString *secondUrl;
@property long long code;
@property long long httpCode;
@property (copy) NSString *downloadedFilePath;
@property (retain) TTDownloadTrackModel *trackModel;
@property (retain) NSMutableArray *httpResponseArray;
@property (copy) NSString *downloaderLog;
@property BOOL isCanRetryRestore;
@property (copy) NSString *componentId;
@property long long initialLen;
@property long long downloadedLen;
@property long long totalLen;
@property double totalTime;
@property BOOL isNegotiateCache;
@property int downloadedFileCount;
@property long long racingTaskExcessBytes;

- (void)addLog:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
