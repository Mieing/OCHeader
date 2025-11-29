@class NSString;

@interface AWEIronManLandingPageBaseRouterModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *logExtra;
@property (nonatomic) unsigned long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackParams;
- (id)routerURLStringWithEnterFromType:(unsigned long long)a0 bdpExtra:(id)a1;
- (id)entranceContextWithEnterFromType:(unsigned long long)a0 bdpExtra:(id)a1 entranceExtra:(id)a2;
- (id)routerURLStringWithEnterFromType:(unsigned long long)a0 bdpExtra:(id)a1 entranceExtra:(id)a2;
- (id)processEntranceExtraDict:(id)a0;
- (void).cxx_destruct;
- (id)location;

@end
