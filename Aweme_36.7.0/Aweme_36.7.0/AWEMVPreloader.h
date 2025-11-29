@class NSMutableDictionary;

@interface AWEMVPreloader : NSObject

@property (retain, nonatomic) NSMutableDictionary *preloadingRecords;

+ (id)shareInstance;

- (id)preloadConfig;
- (void)tryPreloadVideo:(id)a0 pageRefer:(id)a1 priority:(unsigned long long)a2 type:(unsigned long long)a3;
- (id)acquirePageRecordsWithRefer:(id)a0;
- (long long)targetPreloadSize:(id)a0;
- (long long)targetPreloadPriority:(unsigned long long)a0;
- (void)startPreloadVideo:(id)a0 tag:(id)a1 preloadSize:(unsigned long long)a2 group:(id)a3 priorityLevel:(long long)a4 successBlock:(id /* block */)a5 failureBlock:(id /* block */)a6 cancelBlock:(id /* block */)a7;
- (id)getCustomPreloader;
- (id)cancelPageAllPreloadVideos:(id)a0 exceptType:(unsigned long long)a1;
- (void)cancelPreloadVideoWithItemId:(id)a0;
- (long long)defaultPreloadKb;
- (long long)maxPreloadKb;
- (void)tryPreloadVideo:(id)a0 pageRefer:(id)a1;
- (void)tryPreloadClickedVideo:(id)a0 pageRefer:(id)a1;
- (id)cancelPageAllPreloadVideosExceptClicked:(id)a0;
- (void)cancelPreloadVideoWithModel:(id)a0;
- (void).cxx_destruct;

@end
