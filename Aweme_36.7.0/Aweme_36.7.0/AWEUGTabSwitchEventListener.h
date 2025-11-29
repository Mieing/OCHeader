@class NSArray, NSDictionary;

@interface AWEUGTabSwitchEventListener : NSObject

@property (copy, nonatomic) NSArray *eventsList;
@property (copy, nonatomic) NSDictionary *tabParams;
@property (copy, nonatomic) NSDictionary *installParams;
@property (nonatomic) BOOL isPitayaReady;

+ (id)sharedInstance;

- (void)startMonitorTabSwitchEvent;
- (void)p_reportPitayaMock;
- (BOOL)monitorTabSwitchEvent:(id)a0 params:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
