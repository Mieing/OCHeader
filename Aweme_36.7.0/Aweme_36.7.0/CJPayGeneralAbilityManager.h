@class NSDictionary, NSString;

@interface CJPayGeneralAbilityManager : NSObject <CJPayGeneralAbilityService>

@property (copy, nonatomic) NSDictionary *actionNames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerComponents;
+ (id)defaultService;

@end
