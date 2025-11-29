@interface AppMonitorSwitchDataConverter : NSObject

+ (id)getInstanceID;
+ (id)sharedInstance;
+ (void)setInstanceID:(id)a0;

- (BOOL)isEmptyofDic;
- (id)getSwitchResultForStat:(id)a0 monitorPoint:(id)a1 Dimension:(id)a2 RandomNum:(int)a3;
- (id)getSwitchResultForCountAndAlarm:(id)a0 monitorPoint:(id)a1 Type:(id)a2 Arg:(id)a3 RandomNum:(int)a4;
- (void)removeDicContent;
- (void)setDicContent:(id)a0;
- (id)init;

@end
