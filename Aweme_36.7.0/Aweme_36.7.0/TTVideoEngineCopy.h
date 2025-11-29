@class NSString, NSDictionary, TTVideoEngineDNSParser;
@protocol TTVideoEnginePlaySource;

@interface TTVideoEngineCopy : NSObject

@property (retain, nonatomic) id<TTVideoEnginePlaySource> playSource;
@property (copy, nonatomic) NSString *currentHostnameURL;
@property (copy, nonatomic) NSString *currentIPURL;
@property (retain, nonatomic) NSDictionary *urlIPDict;
@property (nonatomic) unsigned long long state;
@property (nonatomic) unsigned long long currentResolution;
@property (nonatomic) unsigned long long lastResolution;
@property (retain, nonatomic) TTVideoEngineDNSParser *dnsParser;
@property (nonatomic) BOOL isFirstURL;
@property (nonatomic) BOOL isRetrying;
@property (nonatomic) unsigned long long apiVersion;
@property (nonatomic) double lastPlaybackTime;

+ (void)copyEngine:(id)a0;
+ (void)assignEngine:(id)a0;
+ (id)defaultInstance;
+ (void)reset;

- (void).cxx_destruct;

@end
