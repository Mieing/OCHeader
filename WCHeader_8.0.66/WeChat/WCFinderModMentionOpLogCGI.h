@class NSString;

@interface WCFinderModMentionOpLogCGI : WCFinderBaseCgi

@property (nonatomic) unsigned long long svrMentionID;
@property (nonatomic) BOOL silent;
@property (copy, nonatomic) NSString *finderUsername;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithSvrMentionID:(unsigned long long)a0 finderUsername:(id)a1 silent:(BOOL)a2 successBlock:(id /* block */)a3 failBlock:(id /* block */)a4;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
