@class NSString;

@interface AWEHomePageChannelEnterPerfMetricsMonitorSceneParams : AWEHomePagePerfMetricsMonitorSceneBaseParams

@property (copy, nonatomic) NSString *fromChannelId;
@property (copy, nonatomic) NSString *toChannelId;

- (id)initWithEvent:(id)a0 scene:(id)a1 triggerReason:(id)a2 fromChannelId:(id)a3 toChannelId:(id)a4;
- (id)initWithEvent:(id)a0 scene:(id)a1 triggerReason:(id)a2 fromChannelId:(id)a3;
- (id)sceneIdentification;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isValid;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
