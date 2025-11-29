@class NSCache;

@interface CJPayRequestDeduplicator : NSObject

@property (retain, nonatomic) NSCache *activeRequests;

+ (id)sharedInstance;

- (BOOL)addRequestKey:(id)a0;
- (void)removeRequestKey:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
