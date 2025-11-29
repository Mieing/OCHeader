@class NSString;

@interface EcsCoreEcsReporter_UrCpp : UnitRCObjcBaseProxyClass <EcsCoreEcsReporter_Ur>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)logFeatureExt:(int)a0 logString:(id)a1;
- (void)kvMonitor:(int)a0 value:(int)a1;
- (void)kvMonitorExtra:(int)a0 value:(int)a1 extra:(id)a2;
- (void)kvMonitorExtraSampleRate:(int)a0 value:(int)a1 extra:(id)a2 sampleRate:(int)a3;
- (void)reportEcsOperationFLow:(id)a0;

@end
