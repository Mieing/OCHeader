@class NSDictionary;

@interface AWELifeFeedsPrefetcher : NSObject

@property (copy, nonatomic) NSDictionary *configItemMap;

+ (id)findConfigItemWithSchema:(id)a0;
+ (void)asyncPrefetchDataStorageId:(id)a0 schema:(id)a1 configItem:(id)a2;
+ (id)prefetchDataWithSchema:(id)a0;
+ (void)prefetchDataWithStorageId:(id)a0 requestParams:(id)a1;
+ (id)sharedInstance;

- (id)fetchConfig;
- (id)configItemWithData:(id)a0;
- (void).cxx_destruct;

@end
