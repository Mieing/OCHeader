@class NSString, WCFinderDataItem, FinderPostTraceInfo;

@interface WCFinderPostConfirmCGI : WCFinderBaseCgi

@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *clientid;
@property (retain, nonatomic) FinderPostTraceInfo *traceInfo;
@property (retain, nonatomic) WCFinderDataItem *pendingDataItem;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithPendingDataItem:(id)a0 successBlock:(id /* block */)a1 failBlock:(id /* block */)a2;
- (void)createRequest;
- (void)preCheckPostRequestValid:(id)a0;
- (void)start;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
