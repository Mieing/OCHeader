@class NSString;

@interface WCFinderModHelpPromotionCgi : WCFinderBaseCgi

@property (copy, nonatomic) NSString *username;
@property (nonatomic) unsigned int opType;
@property (copy, nonatomic) NSString *feedId;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithOpType:(unsigned int)a0 feedId:(id)a1 successful:(id /* block */)a2 failure:(id /* block */)a3;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
