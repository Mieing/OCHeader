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

@end
