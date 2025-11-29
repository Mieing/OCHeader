@class NSString;

@interface DataReportAbilityProviderExptImpl : NSObject <AmoebaAbilityProviderExpt>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getStrExpt:(id)a0 withDef:(id)a1;
- (long long)getIntExpt:(id)a0 withDef:(long long)a1;
- (BOOL)getBoolExpt:(id)a0 withDef:(BOOL)a1;

@end
