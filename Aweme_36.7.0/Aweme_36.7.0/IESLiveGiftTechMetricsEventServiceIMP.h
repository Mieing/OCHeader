@class NSString;
@protocol IESLivePerfSampler;

@interface IESLiveGiftTechMetricsEventServiceIMP : IESLiveGeneralBaseService <IESLiveGiftTechMetricsEventService>

@property (retain, nonatomic) id<IESLivePerfSampler> perfSampler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (id)serviceProtocolsWithParam:(id)a0;
+ (unsigned long long)supportType;

- (void)trReportEnterRoomEffectTechMetrics:(id)a0 dressID:(id)a1 effectID:(id)a2 trackContext:(id)a3;
- (void)trReportGiftTechMetrics:(id)a0 node:(id)a1 trackContext:(id)a2;
- (void)trReportEnterRoomEffectTechMetrics:(id)a0 node:(id)a1 trackContext:(id)a2;
- (id)collectPerformanceInfo;
- (void).cxx_destruct;

@end
