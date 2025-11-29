@class IESECQualityInfoV2;

@interface IESECLiveGoodsListMonitorService : IESECLiveGoodsListBaseServiceV2

@property (retain, nonatomic) IESECQualityInfoV2 *qualityInfo;

- (id)monitorParams;
- (void)traceRenderStart:(id)a0;
- (void)goodListWillStartMainFetchWithInfo:(id)a0;
- (void)goodsListDidRefreshWithInfo:(id)a0 success:(BOOL)a1;
- (void)mainFetchSuccessWithState:(id)a0;
- (void)mainFetchErrorWithState:(id)a0;
- (void)trackListShowV2WithParams:(id)a0;
- (void)trackForMonitorWithParams:(id)a0;
- (void)qualityInfoInit;
- (id)refreshTrackExtraInfoWithRefreshInfo:(id)a0;
- (void)trackShowWithExtraInfo:(id)a0;
- (void)trackListShowWithParams:(id)a0;
- (void)saveListPerfDataForLigoWithParams:(id)a0;
- (void).cxx_destruct;
- (void)start;

@end
