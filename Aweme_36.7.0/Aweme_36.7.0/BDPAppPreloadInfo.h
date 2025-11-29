@class BDPSchema, NSString, NSDictionary, BDPPreloadStrategyResult;

@interface BDPAppPreloadInfo : NSObject <BDPAppPreloadBasicInfoProtocol>

@property (nonatomic) BOOL preloadAllPkgs;
@property (nonatomic) unsigned long long readType;
@property (nonatomic) unsigned long long preloadTimingFrom;
@property (nonatomic) BOOL isRetry;
@property (nonatomic) double startTime;
@property (readonly, nonatomic) NSString *token;
@property (readonly, nonatomic) NSString *ideToken;
@property (readonly, nonatomic) BOOL isSandBox;
@property (readonly, nonatomic) BOOL isTmg;
@property (readonly, nonatomic) NSString *latestVersionNum;
@property (readonly, nonatomic) NSString *latestVersionTag;
@property (readonly, nonatomic) NSString *versionType;
@property (nonatomic) long long type;
@property (nonatomic) long long priority;
@property (nonatomic) long long preloadMode;
@property (copy, nonatomic) BDPSchema *schema;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (copy, nonatomic) NSDictionary *customMetaInfo;
@property (retain, nonatomic) BDPPreloadStrategyResult *strategy;
@property (copy, nonatomic) id /* block */ loadProgressBlk;
@property (copy, nonatomic) id /* block */ preloadCompletion;

+ (id)preloadInfoWithURL:(id)a0 priority:(long long)a1;
+ (id)preloadInfoWithSchema:(id)a0 priority:(long long)a1;
+ (id)preloadInfoWithSchema:(id)a0 priority:(long long)a1 error:(id)a2;
+ (id)preloadInfoWithAppId:(id)a0 type:(long long)a1 priority:(long long)a2 preloadMode:(long long)a3;
+ (id)preloadInfoWithAppId:(id)a0 type:(long long)a1 priority:(long long)a2;

- (void).cxx_destruct;
- (id)init;

@end
