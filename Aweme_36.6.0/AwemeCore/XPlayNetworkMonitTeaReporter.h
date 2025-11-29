@class NSString;

@interface XPlayNetworkMonitTeaReporter : NSObject <XPlayNetworkMonitorListener>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleResponse:(id)a0;

@end
