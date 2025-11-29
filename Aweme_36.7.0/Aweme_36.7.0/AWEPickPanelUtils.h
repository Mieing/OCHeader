@interface AWEPickPanelUtils : NSObject

+ (id)formattedDateForTimestamp:(double)a0;
+ (BOOL)enableJXPickPanelOpt;
+ (BOOL)enableJXPick;
+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;
+ (id)dateFormatterWithoutYear;
+ (id)dateFormatterWithYear;
+ (id)currentUserModel;
+ (id)JXPickConfig;
+ (id)userNameTransformer:(id)a0;
+ (id)relationTagText:(id)a0;
+ (id)relationTagTextColor:(id)a0;
+ (id)relationTagBackgroundColor:(id)a0;
+ (id)timestampStrTransformer:(double)a0;
+ (BOOL)isSevenScreenPickPanel:(long long)a0;
+ (double)pickPanelHeight:(id)a0;
+ (BOOL)shouldPlayerShrinkOrMagnify:(long long)a0;
+ (BOOL)isReferStringInWhiteList:(id)a0 whiteList:(id)a1;
+ (id)timeFormatter;

- (id)aAWEFeedModuleServiceDOUYINJXAdapter;

@end
