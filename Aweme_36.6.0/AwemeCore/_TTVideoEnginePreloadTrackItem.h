@class NSString, TTVideoEngineURLInfo, NSArray;

@interface _TTVideoEnginePreloadTrackItem : NSObject

@property (copy, nonatomic) NSString *taskKey;
@property (copy, nonatomic) NSString *proxyUrl;
@property (nonatomic) unsigned long long usingResolution;
@property (copy, nonatomic) NSString *decryptionKey;
@property (retain, nonatomic) TTVideoEngineURLInfo *urlInfo;
@property (copy, nonatomic) NSArray *urls;
@property (nonatomic) long long cacheState;
@property (nonatomic) long long preloadDurationMilliSecond;
@property (nonatomic) long long preloadTimestamp;
@property (nonatomic) long long preloadHeaderSize;
@property (nonatomic) long long preloadFooterSize;
@property (nonatomic) long long preloadOffset;
@property (nonatomic) long long preloadSize;
@property (nonatomic) long long mediaSize;
@property (nonatomic) long long cacheSize;
@property (copy, nonatomic) NSString *localFilePath;
@property (copy, nonatomic) NSString *customHeader;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *subtag;
@property (copy, nonatomic) NSString *extraInfo;
@property (nonatomic) BOOL isFooterPreloaded;

- (void).cxx_destruct;
- (id)init;
- (BOOL)isEqual:(id)a0;

@end
