@class OMJRenderingParams, OMJEnvironmentParams, OMJWarmupParams, OMJTemplateServiceParams, OMJLoggingParams, OMJILinkParams;

@interface OMJMaasStartupParams : NSObject

@property (readonly, nonatomic) OMJILinkParams *iLinkParams;
@property (readonly, nonatomic) OMJEnvironmentParams *environmentParams;
@property (readonly, nonatomic) OMJLoggingParams *loggingParams;
@property (readonly, nonatomic) OMJWarmupParams *warmupParams;
@property (readonly, nonatomic) OMJTemplateServiceParams *templateServiceParams;
@property (readonly, nonatomic) OMJRenderingParams *renderingParams;
@property (readonly, nonatomic) BOOL shouldEnableMetalRenderSys;

- (id)initWithILinkParams:(id)a0 environmentParams:(id)a1 loggingParams:(id)a2 templateServiceParams:(id)a3 renderingParams:(id)a4;
- (id)initWithILinkParams:(id)a0 environmentParams:(id)a1 loggingParams:(id)a2 warmupParams:(id)a3 templateServiceParams:(id)a4 renderingParams:(id)a5 shouldEnableMetalRenderSys:(BOOL)a6;
- (void).cxx_destruct;

@end
