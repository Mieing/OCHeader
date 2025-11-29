@class NSString;

@interface WCFinderModRecCgi : WCFinderBaseCgi

@property (copy, nonatomic) NSString *username;
@property (nonatomic) unsigned int opType;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithUserName:(id)a0 opType:(unsigned int)a1 successful:(id /* block */)a2 failure:(id /* block */)a3;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
