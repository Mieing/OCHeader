@class NSCache, NSMutableDictionary, NSMutableArray;

@interface ALMVideoPreloadInfoCache : NSObject

@property (retain, nonatomic) NSCache *innerCache;
@property (retain, nonatomic) NSMutableDictionary *preloadedSizeCache;
@property (retain, nonatomic) NSMutableArray *alreadyCompleteTasks;
@property (retain, nonatomic) NSCache *modernPreloadedSizeCache;

+ (id)sharedInstance;

- (void)saveBitrate:(long long)a0 urlString:(id)a1 forVideoID:(id)a2;
- (long long)bitrateForVideoID:(id)a0;
- (id)urlStringForVideoID:(id)a0;
- (void)saveAlreadyPreloadedSize:(double)a0 forTaskID:(id)a1;
- (double)alreadyPreloadedSizeForTaskID:(id)a0;
- (id)preloadedSizeDic;
- (void)markAlreadyCompletionWithTaskID:(id)a0;
- (BOOL)checkAreadyCompleteAndRemoveTaskID:(id)a0;
- (void)savePreloadSize:(long long)a0 mediaSize:(long long)a1 urlString:(id)a2 forVideoID:(id)a3;
- (id)preloadedSizeForVideoID:(id)a0;
- (id)mediaSizeForVideoID:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
