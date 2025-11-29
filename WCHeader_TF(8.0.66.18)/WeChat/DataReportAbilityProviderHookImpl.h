@class NSString;

@interface DataReportAbilityProviderHookImpl : NSObject <AmoebaAbilityProviderHook>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hookSelector:(SEL)a0 forObj:(id)a1 atPosition:(long long)a2 withTag:(id)a3 usingBlock:(id)a4;
- (void)removeBlockOfSelector:(SEL)a0 forObj:(id)a1 atPosition:(long long)a2 withTag:(id)a3;

@end
