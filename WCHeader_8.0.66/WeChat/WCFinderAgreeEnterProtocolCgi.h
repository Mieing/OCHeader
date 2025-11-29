@class NSString;

@interface WCFinderAgreeEnterProtocolCgi : WCFinderBaseCgi

@property (copy, nonatomic) NSString *username;
@property (nonatomic) BOOL agreeFlag;
@property (copy, nonatomic) id /* block */ successfulBlock;
@property (copy, nonatomic) id /* block */ failedBlock;

- (id)initWithUserName:(id)a0 agreeFlag:(BOOL)a1 successful:(id /* block */)a2 failure:(id /* block */)a3;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
