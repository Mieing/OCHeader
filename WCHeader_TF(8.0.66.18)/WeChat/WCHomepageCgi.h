@class SnsUserPageRequest, SnsUserPageResponse;

@interface WCHomepageCgi : WCBaseCgi

@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (nonatomic) unsigned long long currentContinueReqCount;
@property (retain, nonatomic) SnsUserPageRequest *originalRequest;
@property (retain, nonatomic) SnsUserPageResponse *responseToProcess;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;

- (id)init;
- (void)continueRequestWithMaxID:(unsigned long long)a0;
- (void)startRequest:(id)a0 success:(id /* block */)a1 fail:(id /* block */)a2;
- (id)getMergeResponse:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void)exceptionReportThatReceivesNoFeedWithContinueIDWithResponse:(id)a0;
- (void).cxx_destruct;

@end
