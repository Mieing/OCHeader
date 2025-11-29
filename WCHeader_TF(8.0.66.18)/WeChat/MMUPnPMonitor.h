@class NSString;

@interface MMUPnPMonitor : MMUserService <KSUPnPDeviceDescriptionEvents, KSUPnPActionEvents, MMServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)initMonitor;
- (void)reportEvent:(long long)a0 withDevice:(id)a1 action:(id)a2 record:(id)a3;
- (void)UPnPDevice:(id)a0 didCompleteRequestingDescriptionWithRecord:(id)a1;
- (void)UPnPAction:(id)a0 didCompleteTakingActionWithRecord:(id)a1;

@end
