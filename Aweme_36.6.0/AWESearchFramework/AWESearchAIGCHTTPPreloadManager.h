@class NSMutableDictionary;

@interface AWESearchAIGCHTTPPreloadManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *cacheMap;

+ (id)shareInstance;

- (id)addTaskWithRequest:(id)a0;
- (void)removeTaskWithRequest:(id)a0;
- (void).cxx_destruct;

@end
