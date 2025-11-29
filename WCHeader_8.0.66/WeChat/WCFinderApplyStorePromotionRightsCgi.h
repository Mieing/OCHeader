@class NSString;

@interface WCFinderApplyStorePromotionRightsCgi : WCFinderBaseCgi

@property (copy, nonatomic) NSString *finderUsername;
@property (nonatomic) int permissionType;
@property (nonatomic) int operationType;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithWithFinderUsername:(id)a0 permissionType:(int)a1 operationType:(int)a2 successBlock:(id /* block */)a3 failBlock:(id /* block */)a4;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
