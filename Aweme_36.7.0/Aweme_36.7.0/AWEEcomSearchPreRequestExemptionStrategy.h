@class NSString;

@interface AWEEcomSearchPreRequestExemptionStrategy : NSObject <AWEEcomSearchExemptionStrategy>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldExemptForKey:(id)a0 withRules:(id)a1 value1:(id)a2 value2:(id)a3;

@end
