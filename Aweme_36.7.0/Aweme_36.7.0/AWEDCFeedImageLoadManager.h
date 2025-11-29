@class NSMutableDictionary;

@interface AWEDCFeedImageLoadManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *loadSchedulerDict;

+ (id)sharedInstance;

- (void)clearAllCache;
- (void)clearCacheByReferString:(id)a0;
- (id)imageSchedulerByReferString:(id)a0;
- (void).cxx_destruct;

@end
