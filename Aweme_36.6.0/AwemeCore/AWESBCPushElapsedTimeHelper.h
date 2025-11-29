@class NSMutableDictionary;

@interface AWESBCPushElapsedTimeHelper : NSObject

@property (retain, nonatomic) NSMutableDictionary *monitorDict;
@property (nonatomic) BOOL isEnableTraceElapsedTime;

+ (id)sharedInstance;

- (id)getSBCPushElapsedTimeWithBusinessType:(id)a0 scene:(id)a1;
- (void)createMonitorIntoDictWithBusinessType:(id)a0;
- (BOOL)enableTraceShowingInnerPushElapsedTime;
- (id)getMonitorWithBusinessType:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
