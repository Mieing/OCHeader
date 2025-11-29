@class NSDictionary, NSArray;

@interface AWEExperienceEventParamProducer : NSObject

@property (copy, nonatomic) NSDictionary *eventParamCollection;
@property (copy, nonatomic) NSDictionary *paramProducerMap;
@property (readonly, copy, nonatomic) NSArray *eventsList;

+ (id)sharedInstance;

- (id /* block */)vvLevelProducer;
- (id /* block */)isFromFeedCacheProducer;
- (void)loadEventParamCollection;
- (void)addParamTo:(id)a0 forEvent:(id)a1 withContext:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
