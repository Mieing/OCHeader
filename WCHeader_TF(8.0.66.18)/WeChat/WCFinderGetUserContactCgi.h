@class NSString;

@interface WCFinderGetUserContactCgi : WCFinderBaseCgi

@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *exportUsername;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithNickname:(id)a0 successBlock:(id /* block */)a1 failBlock:(id /* block */)a2;
- (id)initWithExpostUsername:(id)a0 successBlock:(id /* block */)a1 failBlock:(id /* block */)a2;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
