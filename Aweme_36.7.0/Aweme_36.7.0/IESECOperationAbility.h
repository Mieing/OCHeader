@class NSString;

@interface IESECOperationAbility : IESECBaseAbility <IESECOperationAbilityProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isFalsyValue:(id)a0;
- (BOOL)isPositive:(id)a0;
- (BOOL)isNullValue:(id)a0;
- (BOOL)isTruthyValue:(id)a0;
- (id)get:(id)a0 path:(id)a1 defaultValue:(id)a2;
- (id)parseToDicFromJsonStr:(id)a0;

@end
