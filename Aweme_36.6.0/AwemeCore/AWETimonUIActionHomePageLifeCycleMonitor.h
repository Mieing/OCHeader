@class NSString;

@interface AWETimonUIActionHomePageLifeCycleMonitor : NSObject <AWEHPLifeCycleProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)enterTopTabChannelWithTabId:(id)a0 enterModel:(id)a1;
- (void)start;

@end
