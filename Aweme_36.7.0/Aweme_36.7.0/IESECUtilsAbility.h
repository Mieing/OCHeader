@class NSString;

@interface IESECUtilsAbility : IESECBaseAbility <IESECUtilsAbilityProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)transMegaObjectToMegaObjectId:(id)a0;
- (void)ttpayWithParams:(id)a0 completion:(id /* block */)a1;
- (void)openSchema:(id)a0 btm:(id)a1 bcm:(id)a2;

@end
