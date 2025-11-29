@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface BDHMXOverviewDataCollector : NSObject <BDHMInnerEventListenerProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *operationQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)onEventUploaded:(id)a0;
- (void)onEventCreated:(id)a0;
- (void)onEventTerminated:(id)a0;
- (void)onEventUnSampled:(id)a0;
- (void)reportToTea:(id)a0 stage:(id)a1;
- (void)reportSSPEvent:(id)a0;
- (id)getFirstCharacters:(long long)a0 string:(id)a1;
- (id)getFormatURL:(id)a0;
- (id)getBidInfo:(id)a0 key:(id)a1;
- (id)resourceTypeTransformWithFileExtension:(id)a0;
- (void).cxx_destruct;

@end
