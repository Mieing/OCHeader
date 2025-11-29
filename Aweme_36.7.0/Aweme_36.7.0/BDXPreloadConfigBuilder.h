@class NSString, BDXPreloadStrategy, BDXResourceLoaderTaskConfig, NSDictionary;

@interface BDXPreloadConfigBuilder : NSObject

@property (copy, nonatomic) NSString *urlString;
@property (retain, nonatomic) BDXPreloadStrategy *strategy;
@property (retain, nonatomic) BDXResourceLoaderTaskConfig *taskConfig;
@property (copy, nonatomic) NSDictionary *configJSONObject;
@property (copy, nonatomic) id /* block */ processBlock;
@property (nonatomic) BOOL triggerPrefetch;
@property (copy, nonatomic) NSString *prefetchBusiness;
@property (copy, nonatomic) NSString *triggerSource;

- (void).cxx_destruct;
- (id)init;

@end
