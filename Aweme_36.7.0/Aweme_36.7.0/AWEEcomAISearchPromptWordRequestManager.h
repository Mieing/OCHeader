@class NSMutableDictionary, ACCLRUCache;

@interface AWEEcomAISearchPromptWordRequestManager : NSObject

@property (retain, nonatomic) ACCLRUCache *promptWordLRUCache;
@property (retain, nonatomic) NSMutableDictionary *taskMap;

+ (id)sharedManager;

- (void)updatePromptWordLRUCacheWithSearchKey:(id)a0 responseWord:(id)a1;
- (void)scheduleTaskWithKey:(id)a0 delay:(double)a1 executeBlock:(id /* block */)a2;
- (void)cancelRequestWithKey:(id)a0;
- (id)getAISearchSugRequestURL;
- (void)cancelAllRequests;
- (void).cxx_destruct;
- (id)init;

@end
