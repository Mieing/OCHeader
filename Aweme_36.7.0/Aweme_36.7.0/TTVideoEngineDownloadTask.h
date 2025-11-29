@class TTVideoEngineDownloader, NSString, NSArray, NSDictionary, NSError, NSMutableDictionary;

@interface TTVideoEngineDownloadTask : NSObject

@property (nonatomic) long long taskIdentifier;
@property (copy, nonatomic) NSString *taskType;
@property (nonatomic) long long countOfBytesReceived;
@property (nonatomic) long long countOfBytesExpectedToReceive;
@property (nonatomic) long long state;
@property (copy, nonatomic) NSError *error;
@property (copy, nonatomic) NSString *availableLocalFilePath;
@property (copy, nonatomic) NSArray *mediaKeys;
@property (copy, nonatomic) NSDictionary *usingUrls;
@property (nonatomic) BOOL finished;
@property (nonatomic) BOOL canceled;
@property (retain, nonatomic) NSMutableDictionary *bytesReceivedMap;
@property (retain, nonatomic) NSMutableDictionary *bytesExpectedToReceiveMap;
@property (copy, nonatomic) NSString *videoId;
@property (weak, nonatomic) TTVideoEngineDownloader *downloader;
@property (nonatomic) double updateTs;
@property (nonatomic) long long updateBytesReceived;
@property (copy) NSString *taskDescription;

+ (id)taskItem;

- (void)setupBaseFiled;
- (BOOL)_shouldRetry:(id)a0;
- (id)_debugInfoString;
- (void)receiveError:(id)a0;
- (void)downloadEnd;
- (void)assignWithDict:(id)a0;
- (id)jsonDict;
- (void).cxx_destruct;
- (id)description;
- (void)suspend;
- (void)invalidateAndCancel;
- (void)resume;

@end
