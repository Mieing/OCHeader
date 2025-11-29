@class NSString;

@interface SECRouteBuiltinPolicy : NSObject <SECRoutePolicyProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)protect:(id)a0;
- (id)protectExternal:(id)a0;
- (id)protectInternal:(id)a0;
- (long long)riskLevelOfRouter:(id)a0;
- (id)riskLevelOf:(id)a0;
- (id)sceneDetect:(id)a0;

@end
