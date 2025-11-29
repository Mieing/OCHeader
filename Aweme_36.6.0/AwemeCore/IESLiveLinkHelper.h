@interface IESLiveLinkHelper : NSObject

+ (id)blockTaskList;
+ (BOOL)traceEnable;
+ (id)modifyConfig;
+ (id)_linkSettingConfig;
+ (BOOL)linkEnable;
+ (double)sessionClearOverTime;
+ (double)taskDependencyWaitOverTime;
+ (BOOL)addClearSessionAllRoomTaskEnable;

@end
