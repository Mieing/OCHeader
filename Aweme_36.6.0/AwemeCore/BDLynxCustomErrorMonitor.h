@interface BDLynxCustomErrorMonitor : BDHybridBaseMonitor

@property (class, nonatomic) BOOL customErrorEnable;

+ (void)lynxView:(id)a0 didRecieveError:(id)a1;
+ (BOOL)startMonitorWithSetting:(id)a0;

@end
