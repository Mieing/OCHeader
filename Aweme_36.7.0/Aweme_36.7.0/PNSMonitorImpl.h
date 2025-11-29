@class NSString;

@interface PNSMonitorImpl : NSObject <PNSMonitorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackService:(id)a0 metric:(id)a1 category:(id)a2 attributes:(id)a3;

@end
