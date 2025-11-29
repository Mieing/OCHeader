@class NSMutableArray, BUASDKMonitor;

@interface BDARVSDKMonitor : NSObject

@property (retain, nonatomic) BUASDKMonitor *monitor;
@property (retain, nonatomic) NSMutableArray *teaEvent;

+ (id)bdarSDKVersion;
+ (id)shareInstance;

- (void)monitorService:(id)a0 value:(id)a1 category:(id)a2 extra:(id)a3;
- (void)monitorWithAlog:(id)a0 eventInfo:(id)a1;
- (void)addNeedTeaEvent:(id)a0;
- (void).cxx_destruct;

@end
