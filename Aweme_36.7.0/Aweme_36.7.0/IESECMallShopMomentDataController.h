@class NSDictionary, NSString;

@interface IESECMallShopMomentDataController : NSObject

@property (nonatomic) BOOL isRequestOnAir;
@property (nonatomic) long long lastCursor;
@property (nonatomic) long long cursor;
@property (copy, nonatomic) NSDictionary *passThroughParams;
@property (copy, nonatomic) NSString *feedback;

- (void)requestData:(id /* block */)a0 metricsBlock:(id /* block */)a1 extraParams:(id)a2;
- (void)updateRequestParamsWithResponse:(id)a0;
- (void)initFetch:(id /* block */)a0 metricsBlock:(id /* block */)a1 extraParams:(id)a2;
- (void)loadMore:(id /* block */)a0 metricsBlock:(id /* block */)a1 extraParams:(id)a2;
- (void).cxx_destruct;

@end
