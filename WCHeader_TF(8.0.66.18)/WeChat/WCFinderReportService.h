@class WCFinderLoadReporter, NSString, WCPlayerPlaybackInfo, WCFinderFluencyReportCenter, NSMutableArray, NSPointerArray, WCFinderTimelineFluencyReportManager, NSMapTable;

@interface WCFinderReportService : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) WCFinderFluencyReportCenter *fluencyReportCenter;
@property (retain, nonatomic) WCFinderTimelineFluencyReportManager *finderReportManager;
@property (retain, nonatomic) NSMutableArray *streamEntranceResourceIdStack;
@property (retain, nonatomic) WCFinderLoadReporter *loadReporter;
@property (retain, nonatomic) NSMapTable *pageUdfInfoMap;
@property (retain, nonatomic) NSMapTable *pageCGIByPassBufferMap;
@property (retain, nonatomic) NSPointerArray *clientPageUdfKVQueue;
@property (retain, nonatomic) NSMapTable *clientKVPageUdfKVMap;
@property (retain, nonatomic) NSString *latestFeedID;
@property (nonatomic) unsigned long long latestMediaType;
@property (retain, nonatomic) WCPlayerPlaybackInfo *latestPlaybackInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)pushTraceIdWithFromScene:(int)a0 toScene:(int)a1 entranceType:(unsigned long long)a2;
- (void)popTraceId:(id)a0;
- (id)getTraceId;
- (id)getSourceId;
- (void)bindViewController:(id)a0;
- (void)addCGIByPassBuffer:(id)a0 toVC:(id)a1;
- (id)currentCGIByPassBuffers;
- (void)addPageUdfInfoWithViewController:(id)a0 key:(id)a1 value:(id)a2;
- (id)getCurrentPageUdfInfoDict;
- (id)getPageUdfInfoValueWithViewController:(id)a0 key:(id)a1;
- (void)addKVPageUdfInfoWithViewController:(id)a0 key:(id)a1 value:(id)a2;
- (void)addKVPageUdfInfoWithViewController:(id)a0 udfKV:(id)a1;
- (void)bindKVPageUdfInfoWithViewController:(id)a0;
- (id)getTopKVPageUdfInfoDict;
- (void)configLatestFeedID:(id)a0 mediaType:(unsigned long long)a1 playbackInfo:(id)a2;
- (void)onApplicationWillResignActive;
- (int)getCurScene;
- (void).cxx_destruct;

@end
