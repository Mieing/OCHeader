@protocol AWEDCFeedDataControllerProtocol, AWEFeedDoubleColumnPrefetchProtocol;

@interface AWESearchMidDCFeedPrefetchManager : NSObject

@property (retain, nonatomic) id<AWEDCFeedDataControllerProtocol, AWEFeedDoubleColumnPrefetchProtocol> prefetchDataController;
@property (nonatomic) double prefetchStartTime;
@property (nonatomic) long long prefetchState;

+ (BOOL)canChangeMonitorBeginTime;
+ (id)sharedInstance;

- (BOOL)enableNativeDC;
- (void)clearPrefetchedData;
- (BOOL)prefetchOpt;
- (void)optPrefetchWithParam:(id)a0 originCompletion:(id /* block */)a1;
- (void)realPrefetchWithDataController:(id)a0 params:(id)a1 originCompletion:(id /* block */)a2;
- (void)trackPrefetchWithStartTime:(long long)a0 success:(BOOL)a1;
- (void)trackPrefetchErrorIfNeeded:(id)a0 error:(id)a1;
- (BOOL)prefetchSearchDCDataWithURL:(id)a0 requestParams:(id)a1 originCompletion:(id /* block */)a2;
- (void)prefetchCache;
- (void).cxx_destruct;

@end
