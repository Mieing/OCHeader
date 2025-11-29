@interface AWEPostPageScheduleTool : NSObject

+ (BOOL)isEnabledWithViewModel:(id)a0;
+ (BOOL)shouldNotSupportLocalLifeOrder;
+ (BOOL)isCellElementVisibleWithViewModel:(id)a0;
+ (id)disabledToastWithViewModel:(id)a0;
+ (long long)cellElementSceneWithViewModel:(id)a0;
+ (void)markHasLocalLifeOrder:(BOOL)a0 viewModel:(id)a1;
+ (BOOL)isPrivacyEnabledWithAuthorityModel:(id)a0;
+ (BOOL)hasLocalLifeOrder:(id)a0;
+ (unsigned long long)scheduleEntranceABTestValue;
+ (BOOL)shouldAddSchedulePostParameterWithViewModel:(id)a0;

@end
