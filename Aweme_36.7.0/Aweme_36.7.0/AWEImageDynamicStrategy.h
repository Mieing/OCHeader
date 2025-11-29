@class NSString;

@interface AWEImageDynamicStrategy : NSObject <AWECPULevelObserverProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)cpuLevelDidUpdate:(long long)a0 newLevel:(long long)a1;
- (void)CPUDidFallback;
- (id)init;

@end
