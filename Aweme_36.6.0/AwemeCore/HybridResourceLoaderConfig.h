@class NSString, NSDictionary, NSArray, NSNumber;

@interface HybridResourceLoaderConfig : NSObject

@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSDictionary *defaultPrefixToAccessKey;
@property (retain, nonatomic) NSNumber *disableGurd;
@property (retain, nonatomic) NSNumber *disableBuildin;
@property (retain, nonatomic) NSNumber *disableCDN;
@property (retain, nonatomic) NSNumber *enableMemoryCache;
@property (copy, nonatomic) NSArray *fetcherSequence;
@property (retain, nonatomic) NSNumber *waitGeckoUpdate;
@property (retain, nonatomic) NSNumber *disableGurdUpdate;
@property (retain, nonatomic) NSNumber *useMemoryCache;
@property (retain, nonatomic) NSNumber *enableRemoteSetting;
@property (nonatomic) BOOL disableGurdThrottle;
@property (nonatomic) long long gurdDownloadPrority;
@property (retain, nonatomic) NSNumber *captureFrequency;
@property (copy, nonatomic) NSArray *forceSkipSampleList;
@property (retain, nonatomic) NSNumber *cacheSize;
@property (retain, nonatomic) NSNumber *enableDownloaderNegotiation;
@property (retain, nonatomic) NSNumber *cndCacheTimeMax;
@property (retain, nonatomic) NSNumber *enablePreLoade;

- (void).cxx_destruct;
- (id)init;

@end
