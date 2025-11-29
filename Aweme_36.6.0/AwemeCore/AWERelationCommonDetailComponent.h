@class NSString;

@interface AWERelationCommonDetailComponent : AWEUserDetailBaseComponent <AWERelationComponentProtocol>

@property (copy, nonatomic) NSString *fromPre;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)onConfigWithRouterParamDict:(id)a0;
- (void).cxx_destruct;
- (void)onInit;

@end
