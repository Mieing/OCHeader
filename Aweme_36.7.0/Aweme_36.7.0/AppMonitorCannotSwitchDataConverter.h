@class NSLock, NSMutableDictionary;

@interface AppMonitorCannotSwitchDataConverter : AppMonitorSwitchDataConverter {
    NSLock *lock;
}

@property (retain, nonatomic) NSMutableDictionary *countDict;
@property (retain, nonatomic) NSMutableDictionary *alarmDict;
@property (retain, nonatomic) NSMutableDictionary *statDict;

+ (id)sharedInstance;

- (BOOL)isEmptyofDic;
- (id)getSwitchResultForStat:(id)a0 monitorPoint:(id)a1 Dimension:(id)a2 RandomNum:(int)a3;
- (id)getSwitchResultForCountAndAlarm:(id)a0 monitorPoint:(id)a1 Type:(id)a2 Arg:(id)a3 RandomNum:(int)a4;
- (void)removeDicContent;
- (void)setDicContent:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
