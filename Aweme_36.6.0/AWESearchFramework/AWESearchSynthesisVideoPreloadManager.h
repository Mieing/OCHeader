@class NSMutableDictionary, NSTimer, NSString, UIView, NSMutableArray, CachalotRunloopIdleObserver;
@protocol BDXKitViewProtocol, AWESearchSynthesisVideoPreloadObserver;

@interface AWESearchSynthesisVideoPreloadManager : NSObject <CachalotRunloopIdleHandler>

@property (nonatomic) BOOL isPreloading;
@property (retain, nonatomic) NSMutableArray *preloadUrlsQueue;
@property (retain, nonatomic) UIView<BDXKitViewProtocol> *preloadView;
@property (retain, nonatomic) NSTimer *preloadTimer;
@property (retain, nonatomic) NSMutableDictionary *preloadDataDict;
@property (retain, nonatomic) CachalotRunloopIdleObserver *runloopIdleObserver;
@property (nonatomic) BOOL isRunLoopIdle;
@property (weak, nonatomic) id<AWESearchSynthesisVideoPreloadObserver> observer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)loopEnded;
- (void)idlePeriodBegin;
- (void)idlePeriodEnd;
- (void)preloadNextUrl;
- (void)preloadWithUrl:(id)a0;
- (id)getPreTranscodeDataWithUrl:(id)a0;
- (void)cancelPreloadUrl:(id)a0;
- (BOOL)isPreloadedUrl:(id)a0;
- (void)savePreTranscodeData:(id)a0 type:(id)a1 url:(id)a2;
- (void)renderPreloadWeb;
- (id)dequeuePreloadUrl;
- (BOOL)hasPreloadedDataForUrl:(id)a0;
- (void)tryRequestServerSavedDataWhenPreload:(id)a0;
- (void)preloadNextUrlImmediate;
- (void)extractRealtimeTranscodeDataWithUrl:(id)a0 withComplete:(id /* block */)a1;
- (void)saveServerTranscodeData:(id)a0 type:(id)a1 url:(id)a2;
- (void)jsbTriggerPreloadWithUrl:(id)a0;
- (void)requestServerSavedDataWithUrl:(id)a0 withComplete:(id /* block */)a1;
- (void)enqueuePreloadUrl:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
