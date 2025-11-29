@class HybridRouterOpenParams, NSString;

@interface CommonHybridRouterParamsObjc : UnitRCObjcBaseClass <CommonHybridRouterParams>

@property (retain, nonatomic) HybridRouterOpenParams *openParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getOpenParams;
- (void).cxx_destruct;

@end
