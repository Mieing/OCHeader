@class TTVideoEngineInfoFetcher, NSString, NSDictionary, TTVideoEngineModel;
@protocol TTVideoEngineNetClient;

@interface TTVideoEngineDownloadVidTask : TTVideoEngineDownloadTask <TTVideoInfoFetcherDelegate>

@property (nonatomic) unsigned long long resolution;
@property (nonatomic) long long codecType;
@property (nonatomic) BOOL baseDashEnable;
@property (nonatomic) BOOL httpsEnable;
@property (retain, nonatomic) TTVideoEngineInfoFetcher *fetcher;
@property (retain, nonatomic) TTVideoEngineModel *videoModel;
@property (nonatomic) unsigned long long currentResolution;
@property (copy, nonatomic) NSString *apiString;
@property (copy, nonatomic) NSString *authString;
@property (copy, nonatomic) NSString *fallbackApi;
@property (copy, nonatomic) NSString *keyseed;
@property (nonatomic) long long retryCount;
@property (readonly, copy, nonatomic) NSString *videoId;
@property (readonly, nonatomic) BOOL bytevc1Enable;
@property (nonatomic) BOOL boeEnable;
@property (retain, nonatomic) NSDictionary *params;
@property (retain, nonatomic) NSDictionary *resolutionMap;
@property (retain, nonatomic) id<TTVideoEngineNetClient> netClient;
@property (nonatomic) unsigned long long apiVersion;
@property (copy, nonatomic) id /* block */ apiStringCall;
@property (copy, nonatomic) id /* block */ authCall;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskItem;
+ (id)vidTaskWithVid:(id)a0 resolution:(unsigned long long)a1 codec:(long long)a2 baseDash:(BOOL)a3 https:(BOOL)a4;
+ (id)vidTaskWithVideoModel:(id)a0 resolution:(unsigned long long)a1;

- (void)infoFetcherDidFinish:(long long)a0;
- (void)infoFetcherDidFinish:(id)a0 error:(id)a1;
- (void)infoFetcherShouldRetry:(id)a0;
- (void)infoFetcherDidCancel;
- (void)infoFetcherFinishWithDNSError:(id)a0;
- (void)setupBaseFiled;
- (BOOL)_shouldRetry:(id)a0;
- (void)receiveError:(id)a0;
- (id)availableLocalFilePath;
- (void)assignWithDict:(id)a0;
- (void)_downloadWithVideoModel:(id)a0;
- (void)_fetchVideoModel;
- (BOOL)_downloadWithUrlInfo:(id)a0;
- (id)jsonDict;
- (void).cxx_destruct;
- (void)suspend;
- (void)invalidateAndCancel;
- (void)resume;
- (BOOL)isEqual:(id)a0;

@end
