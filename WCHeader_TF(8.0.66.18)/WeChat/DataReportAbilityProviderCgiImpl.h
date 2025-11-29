@class NSString;

@interface DataReportAbilityProviderCgiImpl : NSObject <AmoebaAbilityProviderCgi>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isCgiTarget:(id)a0;
- (id)getRealCgiTarget:(id)a0;

@end
