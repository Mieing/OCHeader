@interface AWEIMLaunchTimeTracker : NSObject

+ (void)configEntryTaskStart;
+ (void)configInitTaskStart;
+ (double)initTaskStartTimestamp;
+ (double)entryTaskStartTimestamp;
+ (double)startIMStartTimestamp;
+ (void)configIMStart;

@end
