@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface BDPGameMemoryEventHandler : NSObject {
    int notifyTokens[6];
}

@property (nonatomic) BOOL installed;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *memoryPressureEventSource;
@property (nonatomic) unsigned long long memoryPressureStatus;
@property (copy, nonatomic) id /* block */ eventHandler;

- (void)memoryUsageChangeWithEvent:(id)a0;
- (void)uninstall;
- (void).cxx_destruct;
- (id)init;
- (void)install;

@end
