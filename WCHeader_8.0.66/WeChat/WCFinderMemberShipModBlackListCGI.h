@class NSString;

@interface WCFinderMemberShipModBlackListCGI : WCFinderBaseCgi

@property (copy, nonatomic) NSString *finderUsername;
@property (nonatomic) long long objectId;
@property (nonatomic) long long commenTid;
@property (nonatomic) int opType;
@property (nonatomic) int acctType;
@property (copy, nonatomic) id /* block */ successful;
@property (copy, nonatomic) id /* block */ failure;

- (id)initWithFinderUsername:(id)a0 objectId:(unsigned long long)a1 commenTid:(unsigned long long)a2 opType:(int)a3 acctType:(int)a4 successful:(id /* block */)a5 failure:(id /* block */)a6;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
