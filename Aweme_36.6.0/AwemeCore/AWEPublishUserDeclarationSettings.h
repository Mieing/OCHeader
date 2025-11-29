@interface AWEPublishUserDeclarationSettings : NSObject

+ (void)setDefaultValueIfNeeded:(id)a0;
+ (BOOL)showCellReminder:(id)a0;
+ (void)increaseReminderTimes;
+ (BOOL)showSheetReminder:(id)a0;
+ (long long)currentReminderTimes;

@end
