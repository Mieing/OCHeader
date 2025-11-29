@protocol TAVKeyEventMonitorObserver;

@interface TAVKeyEventMonitor : NSObject

@property (nonatomic) BOOL enableAutoReport;
@property (retain, nonatomic) id<TAVKeyEventMonitorObserver> observer;

+ (id)shared;

- (id)init;
- (void).cxx_destruct;

@end
