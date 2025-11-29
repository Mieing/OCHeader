@class NSString;

@interface AWEBulletPerfMonitor : NSObject <BDXPerfMonitorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startFpsMonitorWithScene:(id)a0;
- (void)endFpsMonitorWithScene:(id)a0 extraData:(id)a1;

@end
