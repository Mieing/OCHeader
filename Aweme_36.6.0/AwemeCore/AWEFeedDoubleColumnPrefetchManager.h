@class NSMutableDictionary;

@interface AWEFeedDoubleColumnPrefetchManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *prefetchDataControllerCache;
@property (nonatomic) BOOL hasPrefetch;

+ (id)sharedInstance;

- (void)prefetchWithReferString:(id)a0;
- (void)prefetchWithReferString:(id)a0 args:(id)a1 params:(id)a2;
- (id)getPrefetchDataControllerWithReferString:(id)a0;
- (BOOL)enablePrefetchDoubleColumnData:(id)a0;
- (id)prefetchMap;
- (void)setPrefetchDataControllerWithReferString:(id)a0 referString:(id)a1;
- (void).cxx_destruct;

@end
