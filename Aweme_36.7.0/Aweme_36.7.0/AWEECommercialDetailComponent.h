@class NSDictionary, NSString;

@interface AWEECommercialDetailComponent : AWEUserDetailBaseComponent <AWEECommercialDetailProtocol>

@property (copy, nonatomic) NSDictionary *ecomShareTrackParams;
@property (nonatomic) BOOL ecomReflowTracked;
@property (copy, nonatomic) NSString *shareObject;
@property (copy, nonatomic) NSString *ecomEnterStoreProductId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)referString;
- (id)enterFrom;
- (BOOL)onConfigWithRouterParamDict:(id)a0;
- (void)viewDidAppear;
- (id)userID;
- (void).cxx_destruct;
- (id)user;
- (void)onInit;

@end
