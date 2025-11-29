@class NSString, NSMutableDictionary, AWEAwemeModel, NSError;

@interface AWEAwemeDetailPrefetchManager : NSObject <AWEDeepLinkWorkFlowServiceDelegate>

@property (retain, nonatomic) NSString *currentItemID;
@property (nonatomic) BOOL isFetching;
@property (retain, nonatomic) AWEAwemeModel *prefetchResultAweme;
@property (retain, nonatomic) NSError *prefetchResultError;
@property (copy, nonatomic) id /* block */ finishBlock;
@property (retain, nonatomic) NSString *blockID;
@property (nonatomic) double urlEnterTime;
@property (retain, nonatomic) NSString *urlEnterTimeItemID;
@property (retain, nonatomic) NSMutableDictionary *itemIDToURLDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableTrack;
+ (BOOL)enableAsync;
+ (void)_aweLazyRegisterLoad;
+ (id)awemeIDFromUrlPath:(id)a0;
+ (BOOL)enableAwemeDetailPreload;
+ (BOOL)enableHotLaunch;
+ (id)sharedInstance;

- (BOOL)isHotLaunch;
- (void)notifyPreLoadTaskExecute:(id)a0;
- (void)handleParamsAndTryPrefetchWithURL:(id)a0 currentID:(id)a1;
- (BOOL)shouldReturnWithParams:(id)a0;
- (void)handleNetFinishWithAweme:(id)a0 error:(id)a1 currentID:(id)a2 netStartTime:(double)a3 beginTime:(double)a4;
- (id)generalRequestParamWithParams:(id)a0;
- (void)trackPrefetchFinishWithItemID:(id)a0 netDuration:(double)a1 handleDuration:(double)a2 isAsync:(BOOL)a3 success:(BOOL)a4;
- (unsigned long long)getItemStateWithItemID:(id)a0;
- (BOOL)setFinishBlockIfValid:(id /* block */)a0 itemID:(id)a1;
- (void)cancelPrefetchWithItemID:(id)a0;
- (id)getAwemeWithItemID:(id)a0;
- (void)trackDetailCostTimeIfNeededWithItemID:(id)a0 prefetchType:(long long)a1 success:(BOOL)a2;
- (void).cxx_destruct;
- (void)applicationWillTerminate:(id)a0;

@end
