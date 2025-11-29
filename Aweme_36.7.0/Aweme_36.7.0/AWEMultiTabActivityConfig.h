@interface AWEMultiTabActivityConfig : NSObject

+ (id)multiTabSchemaWhitelist;
+ (id)walletSchema;
+ (id)multiTabActivityConfig;
+ (id)activitiesFromSetting;
+ (BOOL)walletEntryShow;
+ (BOOL)disableAdjustScrollInset;
+ (id)activitiesForCurrentTime:(double)a0 ignoreTimeCheckList:(id)a1;
+ (id)activitySchemaForID:(id)a0;

@end
