@class NSString;

@interface BDHMXValidationDataCollector : NSObject <BDHMInnerEventListenerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)onEventUploaded:(id)a0;
- (void)onEventCreated:(id)a0;
- (void)onEventTerminated:(id)a0;
- (void)onEventUnSampled:(id)a0;
- (void)collectValidationParamsFrom:(id)a0 desc:(id)a1;
- (id)transTerminatedReasonFrom:(long long)a0;
- (id)getBidFromDict:(id)a0;
- (void)uploadDataToPlatform:(id)a0;

@end
