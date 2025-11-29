@class NSString, IESECOrderListContext, IESECOrderTaskRunner, NSDate, IESECOrderListRequestModel;
@protocol IESECOrderListRequestReloadUIDelegate;

@interface IESECOrderListRequestViewModel : NSObject <YataCallbackInterface> {
    long long _silentRequestingUpdateCount;
    NSDate *_silentRequestStartTime;
    long long _maxSilentRequestingUpdateCount;
}

@property (retain, nonatomic) IESECOrderListContext *context;
@property (weak, nonatomic) id<IESECOrderListRequestReloadUIDelegate> delegate;
@property (retain, nonatomic) IESECOrderTaskRunner *runner;
@property (nonatomic) BOOL hasQuerySuccessed;
@property (nonatomic) BOOL canRequest;
@property (nonatomic) BOOL canLoadMore;
@property (nonatomic) BOOL isSilentRequestRunning;
@property (retain, nonatomic) IESECOrderListRequestModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onFetchBegin:(id)a0;
- (BOOL)onFetchEndBizValidWithDataObject:(id)a0;
- (void)onProtocolDispatchEnd:(unsigned long long)a0;
- (void)onProtocolReloadEnd:(unsigned long long)a0 success:(BOOL)a1;
- (void)startChunkQueryTaskManage;
- (BOOL)isFirstQueryResultWithScene:(long long)a0 callBackData:(id)a1;
- (void)completeCurrentQueryRunningTask;
- (void)requestQueryForScene:(long long)a0;
- (void)cancelChunkRequestIfNeeded;
- (void)p_reportQueryNetInfoForStage:(unsigned long long)a0;
- (void)p_queryChunkRequestDidFinishWithCallBackData:(id)a0;
- (void)p_reportChunkMonitorRecordsWithResponse:(id)a0 error:(id)a1 failover:(BOOL)a2;
- (long long)p_numberOfOrders;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithContext:(id)a0 delegate:(id)a1;

@end
