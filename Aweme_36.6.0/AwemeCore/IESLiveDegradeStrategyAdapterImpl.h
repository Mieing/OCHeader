@class NSString;

@interface IESLiveDegradeStrategyAdapterImpl : IESLiveBaseAdapter <IESLiveDegradeStrategyAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)degradeForRoleWithKey:(id)a0 isAnchor:(BOOL)a1 block:(id /* block */)a2;

@end
