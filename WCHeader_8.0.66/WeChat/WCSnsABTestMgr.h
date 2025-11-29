@class NSArray, NSMutableDictionary, WCSnsABTestFeedHiddenInfo;

@interface WCSnsABTestMgr : NSObject <INewABTestMgrExt, MMKernelExt, PBMessageObserverDelegate> {
    NSMutableDictionary *dicABTestInfo;
    NSMutableDictionary *dicActionResult;
    WCSnsABTestFeedHiddenInfo *feedHiddenInfo;
    BOOL needWriteBackHiddenInfo;
    BOOL needWriteBackOperationInfo;
    NSArray *arrDeleteLayerId;
    NSArray *arrDeleteExpId;
    NSMutableDictionary *dicFeedQuestionBarHiddenInfo;
    NSMutableDictionary *dicDocSnRepeatUrlHiddenInfo;
}

- (id)init;
- (void)tryInitABTestInfo;
- (void)initABTestInfo:(id)a0;
- (id)getLayerIdForDataItem:(id)a0;
- (id)getABTestInfoForLayerId:(id)a0;
- (BOOL)shouldHiddenTip:(id)a0 dataItemId:(id)a1;
- (BOOL)hiddenTip:(id)a0 dataItemId:(id)a1;
- (id)getFirstTip:(id)a0;
- (BOOL)isFirstTip:(id)a0 layerId:(id)a1;
- (id)getTipData:(id)a0 layerId:(id)a1;
- (void)reportABTestResult:(id)a0 result:(id)a1;
- (void)tryReportABTestResult;
- (unsigned int)getABTestExperType:(id)a0;
- (void)logABTestResult:(id)a0 dataItemId:(id)a1 tipActionResult:(id)a2;
- (void)tryLogABTestResultTime:(id)a0 dataItemId:(id)a1 startTime:(BOOL)a2 endTime:(BOOL)a3;
- (id)pathForFeedHiddenInfo;
- (void)tryloadFeedHiddenInfo;
- (void)trySaveFeedHiddenInfo;
- (void)tryUpdateDleteLayerIdList;
- (void)tryUpdateDeleteExpIdList;
- (BOOL)couldRunSightPreload:(id)a0;
- (void)clickDelayShowFeed:(id)a0;
- (void)exposureDelayShowFeed:(id)a0;
- (void)logFeatureDelayShowFeed:(id)a0 opType:(unsigned int)a1 clickTime:(unsigned int)a2;
- (BOOL)hitTheDelayShowExp:(id)a0;
- (BOOL)needDelayShow:(id)a0;
- (BOOL)couldShowRepeatUrlMenuItem:(id)a0;
- (BOOL)isOnRepeatUrlExperiment:(id)a0;
- (void)operateUrlFeed:(int)a0 dataItem:(id)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)onOperateUrlFeedReturn:(id)a0 Event:(unsigned int)a1;
- (void)cacheRepeatUrlAfterConfirmWithDocId:(id)a0 snsOperationWrap:(id)a1;
- (id)pathForDocSnRepeatUrlHiddenInfo;
- (void)tryLoadRepeatUrlHiddenInfo;
- (void)trySaveRepeatUrlHiddenInfo;
- (BOOL)isDataItemShouldHideForRepeatUrl:(id)a0 hasCacheSnsRepeatUrlInfo:(BOOL)a1;
- (void)onModifyABTestItem:(id)a0 bizId:(id)a1 abTestItem:(id)a2;
- (void)onManulLogOut;
- (void)onServiceEnterBackground;
- (void)onServiceTerminate;
- (void)onServiceMemoryWarning;
- (void).cxx_destruct;

@end
