@class NSString;

@interface WCFinderAdLiveNoticeCGI : WCFinderBaseCgi

@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *noticeId;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithAnchorUsername:(id)a0 noticeId:(id)a1 sucessBlock:(id /* block */)a2 failBlock:(id /* block */)a3;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
