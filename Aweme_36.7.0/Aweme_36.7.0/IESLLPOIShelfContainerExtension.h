@class NSDictionary, NSMutableArray;

@interface IESLLPOIShelfContainerExtension : IESLLPOIBaseExtension

@property (retain, nonatomic) NSMutableArray *waitExposureArr;
@property (retain, nonatomic) NSMutableArray *notificationQueue;
@property (nonatomic) BOOL isJsRuntimeReady;
@property (copy, nonatomic) NSDictionary *poiShelfConfig;

- (void)pageDidScroll:(id)a0;
- (void)afterConfigWithRouterParamDict:(id)a0;
- (void)initializeExtension;
- (void)sendNotificationFromQueue;
- (void)addExposureView:(id)a0 exposureType:(id)a1 exposureParams:(id)a2;
- (void)updateJsRuntimeReadyStatus;
- (void)registerShelfContainerWithBizCode;
- (void)preloadEmbeddedEngine;
- (void)scanViewOnScreen;
- (void)sendNotificationToJsRuntimeWithEventName:(id)a0 eventParams:(id)a1;
- (void).cxx_destruct;

@end
