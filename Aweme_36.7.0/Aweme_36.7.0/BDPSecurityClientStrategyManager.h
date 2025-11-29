@class NSString, NSDictionary, NSObject, BDPClientAIDetecionConfig;
@protocol OS_dispatch_queue;

@interface BDPSecurityClientStrategyManager : NSObject <BDPClientAIDetectionMessage, BDPSecurityClientStrategyMessage> {
    NSObject<OS_dispatch_queue> *_executeQueue;
    NSDictionary *_allRulesDict;
    NSString *_deviceInfoString;
    NSString *_currentEventId;
    NSString *_currentSceneId;
    NSString *_currentWorkflowId;
}

@property (retain, nonatomic) BDPClientAIDetecionConfig *detectionConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initService;
- (void)bdpDetection_updateDetectionInfo:(id)a0;
- (void)bdpDetection_onAppRouteChangePageWillLeaveWithPageID:(long long)a0 pageURL:(id)a1 uniqueID:(id)a2 needCheck:(BOOL)a3;
- (void)checkWithParams:(id)a0 PageURL:(id)a1 uniqueID:(id)a2 completion:(id /* block */)a3;
- (void)updateStrategy:(id)a0 deviceInfo:(id)a1;
- (void).cxx_destruct;

@end
