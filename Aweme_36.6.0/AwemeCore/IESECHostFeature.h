@interface IESECHostFeature : NSObject

+ (void)lazyRegisterFeatures;
+ (id)sharedRuntimeFeature;
+ (BOOL)hardCodeSupports:(unsigned long long)a0;
+ (void)claimFeature:(unsigned long long)a0;
+ (void)claimFeatures:(id)a0;
+ (BOOL)supports:(unsigned long long)a0;

@end
