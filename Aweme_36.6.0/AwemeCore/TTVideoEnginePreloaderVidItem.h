@class NSString, NSDictionary;
@protocol TTVideoEngineNetClient;

@interface TTVideoEnginePreloaderVidItem : NSObject

@property (copy, nonatomic) NSString *videoId;
@property (nonatomic) unsigned long long resolution;
@property (nonatomic) long long preloadSize;
@property (nonatomic) long long codecType;
@property (nonatomic) BOOL byteVC1Enable;
@property (nonatomic) BOOL dashEnable;
@property (nonatomic) BOOL httpsEnable;
@property (nonatomic) BOOL boeEnable;
@property (retain, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *subTag;
@property (nonatomic) long long priorityLevel;
@property (nonatomic) BOOL onlyFetchVideoModel;
@property (retain, nonatomic) NSDictionary *resolutionMap;
@property (retain, nonatomic) id<TTVideoEngineNetClient> netClient;
@property (nonatomic) unsigned long long apiVersion;
@property (copy, nonatomic) id /* block */ apiStringCall;
@property (copy, nonatomic) id /* block */ authCall;
@property (copy, nonatomic) id /* block */ fetchDataEnd;
@property (copy, nonatomic) id /* block */ usingUrlInfo;
@property (copy, nonatomic) id /* block */ cacheFilePath;
@property (copy, nonatomic) id /* block */ preloadEnd;
@property (copy, nonatomic) id /* block */ preloadCanceled;
@property (copy, nonatomic) id /* block */ preloadDidStart;
@property (copy, nonatomic) id /* block */ preloadProgress;

+ (id)preloaderVidItem:(id)a0 reslution:(unsigned long long)a1 preloadSize:(long long)a2 codec:(long long)a3;
+ (id)preloaderVidItem:(id)a0 reslution:(unsigned long long)a1 preloadSize:(long long)a2 isByteVC1:(BOOL)a3;

- (void).cxx_destruct;

@end
