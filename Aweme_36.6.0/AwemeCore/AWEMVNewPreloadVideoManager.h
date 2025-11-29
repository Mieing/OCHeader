@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AWEMVNewPreloadVideoManager : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *preloadVideoQueue;
@property (retain, nonatomic) NSMutableDictionary *preloadingMap;

+ (id)shareInstance;

- (id)preloadConfig;
- (long long)maxPreloadKb;
- (long long)smallCardPreloadSize:(id)a0;
- (void)tryPreloadVideo:(id)a0 preloadSize:(long long)a1 priorityLevel:(long long)a2;
- (void)startPreloadVideo:(id)a0 preloadSize:(unsigned long long)a1 group:(id)a2 priorityLevel:(long long)a3 successBlock:(id /* block */)a4 failureBlock:(id /* block */)a5 cancelBlock:(id /* block */)a6;
- (long long)smallCardPreloadKb;
- (long long)smallCardPreloadSecond;
- (long long)preloadSizeWithModel:(id)a0 second:(long long)a1 defaultPreloadSize:(long long)a2;
- (void)cancelPreloadVideo:(id)a0;
- (void)tryPreloadSamllCard:(id)a0;
- (void)cancelAllPreloadVideoExcept:(id)a0;
- (void)tryPreloadLargeCard:(id)a0;
- (void)tryPreloadVideos:(id)a0;
- (void)cancelAllPreloadVideo;
- (BOOL)judgePreloadStateEnable:(id)a0;
- (BOOL)preloadInAsyncQueue;
- (void)runInAsyncQueue:(id /* block */)a0;
- (long long)largeCardPreloadSize:(id)a0;
- (long long)defalutPreloadKb;
- (void)cancelPreloadVideoWithGroup:(id)a0;
- (long long)largeCardPreloadKb;
- (long long)largeCardPreloadSecond;
- (unsigned long long)preloadStateRestrictions;
- (unsigned int)preloadQueueQosClass;
- (void).cxx_destruct;

@end
