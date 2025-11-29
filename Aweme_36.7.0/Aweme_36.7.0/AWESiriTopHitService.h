@class NSString;

@interface AWESiriTopHitService : HTSService <AWESiriTopHitServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)markTopHitClicked:(id)a0 title:(id)a1 jumpScheme:(id)a2;
- (id)getTopHitBusiness:(id)a0;

@end
