@class AWEFeedVideoLocalLifeAnchorV2ViewContext, NSDictionary, NSString;

@interface AWEFeedVideoLocalLifeAnchorV2PrefetchUtils : NSObject

@property (retain, nonatomic) AWEFeedVideoLocalLifeAnchorV2ViewContext *viewContext;
@property (retain, nonatomic) NSDictionary *poiAnchorPreloadConfig;
@property (copy, nonatomic) NSString *poiPrefetchKey;
@property (nonatomic) BOOL hasRegisterSmartUnit;

- (void)updateViewContext:(id)a0;
- (BOOL)enablePitayaPreload;
- (BOOL)enableSmartPreload;
- (id)initWithViewContext:(id)a0;
- (void)registerPrefetchPOIAnchorDetail;
- (BOOL)checkPrefecthPitayaPreLoadInfoWithPlayTime:(double)a0;
- (BOOL)checkNeedPrefetchPOIAnchorDetail;
- (void)trackPrefetchEvent:(id)a0 params:(id)a1;
- (void)doPOIAnchorDetailPrefetch;
- (id)p_createFeedAnchorContext;
- (BOOL)checkPrefetchPOILocalLifePitayaPreloadInfo;
- (void)prefetchPOIDetailWithPlayBackTime:(double)a0;
- (void)preRequestPOIDetailWhenTouchDown;
- (void)clearPOIAnchorDetailPrefetch;
- (void)runPOILocalLifePitayaTask;
- (void).cxx_destruct;

@end
