@class AWEUGCustomsLastFeedItem;

@interface AWEUGCustomsLastFeedCache : NSObject

@property (retain) AWEUGCustomsLastFeedItem *outFeedAweme;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } cacheLock;

+ (id)sharedInstance;

- (void)setLastFeed:(id)a0;
- (id)lastFeedItem;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)appWillResignActive;

@end
