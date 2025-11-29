@class HMDTTMonitor, NSString, HMDMonitorCallbackObject, NSMutableArray;
@protocol IESECFrameDropMonitorProtocol;

@interface IESECQualityMonitor : NSObject <IESECPagePerformanceDelegate>

@property (retain, nonatomic) HMDMonitorCallbackObject *hmdFPSCallback;
@property (retain, nonatomic) NSMutableArray *fpsSubscribers;
@property (retain, nonatomic) id<IESECFrameDropMonitorProtocol> hmdFrameDropMonitor;
@property (retain, nonatomic) HMDTTMonitor *ecomQualityMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)perfManager;
+ (void)verifyCartSchemaParams:(id)a0;
+ (double)currentTime;
+ (id)sharedManager;

- (void)trackEvent:(id)a0 params:(id)a1;
- (void)hmdTrackService:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3;
- (void)iesec_hmdTrackService:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3;
- (void)enterCustomFPSMonitorScene:(id)a0;
- (void)leaveCustomFPSMonitorScene:(id)a0;
- (void)didRecordedPagePerformanceForPage:(id)a0 withStage1:(double)a1 stage2:(double)a2 stage3:(double)a3;
- (void)subscribeFrameDropMonitor:(id /* block */)a0 targetObj:(id)a1;
- (void)unsubscribeFrameDropMonitorWithTargetObj:(id)a0;
- (void)iesec_hmdTrackService:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3 traceStart:(double)a4 traceEnd:(double)a5;
- (void)dispatchFPSMonitorEvent:(id)a0;
- (void)subscribeFPSMonitor:(id /* block */)a0 targetObj:(id)a1;
- (void)unsubscribeFPSMonitorWithTargetObj:(id)a0;
- (void)trackCartQueryErrorWithError:(id)a0 response:(id)a1 scene:(id)a2;
- (void)trackCartMonitorWithParams:(id)a0;
- (void)trackCartStartWithParams:(id)a0;
- (void)trackCartShowWithStatus:(id)a0 extraParams:(id)a1;
- (void)trackCartRenderErrorWithSuccess:(BOOL)a0 scene:(id)a1;
- (void)trackGoodsDetailQualityInfo:(id)a0;
- (void)trackGoodsDetailQualityInfoV2:(id)a0 qualityInfo:(id)a1;
- (void)trackGoodsDetailStartWithPdpType:(id)a0 extraParams:(id)a1;
- (void)trackGoodsDetailShowWithStatus:(id)a0 pdpType:(id)a1 extraParams:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
