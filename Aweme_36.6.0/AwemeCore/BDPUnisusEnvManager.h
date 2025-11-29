@class NSString;

@interface BDPUnisusEnvManager : NSObject <UnisusEnvServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (id)getEnvParams;
- (BOOL)pluginUpdateEnable;
- (long long)transToInteger:(id)a0;
- (id)getBdpHDTDebugStatus;
- (long long)getUnisusWorkerStackSize;
- (id)getBdpDeviceId;

@end
