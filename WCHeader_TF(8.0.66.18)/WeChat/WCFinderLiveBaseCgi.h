@class NSString, MMFinderLiveTaskId, MMFinderLiveTask, MMLiveBaseTask;
@protocol MMFinderLiveTaskFunctionPlugin;

@interface WCFinderLiveBaseCgi : WCFinderBaseCgi <MMLiveTaskMgrExt>

@property (retain, nonatomic) MMFinderLiveTaskId *liveTaskId;
@property (retain, nonatomic) NSString *liveSessionKey;
@property (nonatomic) BOOL isForbidCancelCGI;
@property (nonatomic) BOOL isLiveImportant;
@property (nonatomic) unsigned int cgiRetryCountAfterBindCellular;
@property (readonly, nonatomic) MMFinderLiveTask *finderLiveTask;
@property (readonly, nonatomic) MMLiveBaseTask<MMFinderLiveTaskFunctionPlugin> *liveTask;
@property (readonly, nonatomic) BOOL ignoreError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setRequest:(id)a0;
- (void)start;
- (void)onCgiDelayToGetResponse;
- (BOOL)shouldAutoProcessingToastWithError:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (BOOL)enableBindCellular;
- (BOOL)enableCustomTimeout;
- (void)onClearDataForExitLiveWithLiveTask:(id)a0;
- (void).cxx_destruct;

@end
