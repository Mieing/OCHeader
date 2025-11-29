@class NSString, NSMutableDictionary;
@protocol AWEFeedCacheTracker;

@interface AWEFeedCachePipelineContext : NSObject

@property (retain, nonatomic) NSMutableDictionary *dataMap;
@property (retain, nonatomic) id<AWEFeedCacheTracker> tracker;
@property (retain, nonatomic) id request;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *scene;

- (id)initWithRequest:(id)a0 tag:(id)a1;
- (id)findDataForKey:(id)a0;
- (void)putDataWithKey:(id)a0 Data:(id)a1;
- (void)onEvent:(id)a0 withParams:(id)a1;
- (void).cxx_destruct;

@end
