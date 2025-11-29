@class NSString, WCFinderUploadTask;

@interface WCFinderOpFinderMemberShipQACGI : WCFinderBaseCgi

@property (retain, nonatomic) WCFinderUploadTask *task;
@property (copy, nonatomic) NSString *finderUsername;
@property (copy, nonatomic) NSString *refObjectid;
@property (nonatomic) int oprType;
@property (copy, nonatomic) id /* block */ successful;
@property (copy, nonatomic) id /* block */ failure;

- (id)initWithFinderUploadTask:(id)a0 successful:(id /* block */)a1 failure:(id /* block */)a2;
- (void)createPostRequest;
- (id)initWithFinderUsername:(id)a0 refObjectid:(id)a1 oprType:(int)a2 successful:(id /* block */)a3 failure:(id /* block */)a4;
- (void)createOPRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
