@class NSLock;

@interface AppMonitorSwitchDataInterface : NSObject

@property (retain, nonatomic) NSLock *lock;
@property BOOL sample;

+ (void)disableSample;
+ (id)sharedInstance;

- (int)GetValidPoint:(id)a0 MonitorPoint:(id)a1 Measure:(id)a2 measureValue:(id)a3;
- (void)setLocalConfig;
- (id)GetDetailPoint:(id)a0 MonitorPoint:(id)a1;
- (BOOL)GetResult:(id)a0 MonitorPoint:(id)a1 Type:(id)a2 Dimension:(id)a3 Arg:(id)a4;
- (void).cxx_destruct;
- (id)init;

@end
