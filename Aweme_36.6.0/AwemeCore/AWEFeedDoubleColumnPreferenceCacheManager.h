@class NSMutableDictionary;

@interface AWEFeedDoubleColumnPreferenceCacheManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *prefetchCacheDict;

+ (id)sharedInstance;

- (void)resumeRecordShowTimeWithReferString:(id)a0;
- (void)pauseRecordShowTimeWithReferString:(id)a0;
- (id)getUninterestedAwemesInfoArrayWithReferString:(id)a0;
- (id)modelWithReferString:(id)a0;
- (void)recordShowTime:(id)a0 withReferString:(id)a1;
- (void)startRecordShowTime:(id)a0 withReferString:(id)a1;
- (void)endRecordShowTime:(id)a0 withReferString:(id)a1;
- (void)addAwemeToInterestedAwemes:(id)a0 withReferString:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
