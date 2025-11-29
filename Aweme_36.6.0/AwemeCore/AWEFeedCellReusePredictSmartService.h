@class NSString, AWEFeedCellIdentifierTracker;

@interface AWEFeedCellReusePredictSmartService : AWEBaseSmartServiceImpl <AWEFeedCellReusePredictSmartServicePrivate, AWEFeedCellReusePredictSmartService>

@property (retain, nonatomic) AWEFeedCellIdentifierTracker *cellIDTracker;
@property (nonatomic) BOOL isTrackOnly;
@property (nonatomic) long long predictRecentCellIDCnt;
@property (nonatomic) long long realRecentCellIDCnt;
@property (nonatomic) BOOL isDebug;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)abTestConfig;

- (void)onServiceInit;
- (void)onRunConfigBuilder:(id)a0;
- (void)onWillRunCompletion:(BOOL *)a0 input:(id)a1 output:(id)a2;
- (BOOL)injectTruthForData:(id)a0 withInput:(id)a1 ext:(id)a2;
- (void)collectionTruthWithCellID:(id)a0 aweme:(id)a1;
- (void).cxx_destruct;

@end
