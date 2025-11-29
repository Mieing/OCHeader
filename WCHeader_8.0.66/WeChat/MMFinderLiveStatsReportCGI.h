@class NSData, NSMutableArray;

@interface MMFinderLiveStatsReportCGI : WCFinderLiveBaseCgi

@property (retain, nonatomic) NSData *liveCookies;
@property (retain, nonatomic) NSMutableArray *statsArr;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithLiveTaskId:(id)a0 liveCookies:(id)a1 statsArr:(id)a2 successBlock:(id /* block */)a3 failBlock:(id /* block */)a4;
- (id)initWithStatsArr:(id)a0 successBlock:(id /* block */)a1 failBlock:(id /* block */)a2;
- (id)initWithLiveId:(unsigned long long)a0 objectId:(unsigned long long)a1 statsArr:(id)a2 successBlock:(id /* block */)a3 failBlock:(id /* block */)a4;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
