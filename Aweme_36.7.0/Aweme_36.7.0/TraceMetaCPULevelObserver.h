@class NSString;

@interface TraceMetaCPULevelObserver : NSObject <AWECPULevelObserverProtocol> {
    long long _notifyTime;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cpuLevelDidUpdate:(long long)a0 newLevel:(long long)a1;
- (void)thermalStateDidChange:(id)a0;

@end
