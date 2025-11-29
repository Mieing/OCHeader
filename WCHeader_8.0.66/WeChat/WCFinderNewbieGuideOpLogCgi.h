@class NSString;

@interface WCFinderNewbieGuideOpLogCgi : WCFinderBaseCgi

@property (nonatomic) BOOL neverShow;
@property (nonatomic) int eduType;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithEduType:(int)a0 userName:(id)a1 neverShow:(BOOL)a2 successBlock:(id /* block */)a3 failBlock:(id /* block */)a4;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
