@class NSString;

@interface AWEHomePageChannelPreloadPerfMetricsMonitorSceneParams : AWEHomePagePerfMetricsMonitorSceneBaseParams

@property (copy, nonatomic) NSString *channelID;
@property (nonatomic) BOOL businessHasHandle;
@property (nonatomic) double methodBeginTime;
@property (nonatomic) double methodEndTime;
@property (copy, nonatomic) NSString *channelEnterFrom;
@property (copy, nonatomic) NSString *channelEnterMethod;

- (id)sceneIdentification;
- (id)initWithEvent:(id)a0 scene:(id)a1 triggerReason:(id)a2 channelID:(id)a3 channelEnterFrom:(id)a4 channelEnterMethod:(id)a5;
- (id)initWithEvent:(id)a0 scene:(id)a1 triggerReason:(id)a2 channelID:(id)a3;
- (id)initWithEvent:(id)a0 scene:(id)a1 channelID:(id)a2 channelEnterFrom:(id)a3 channelEnterMethod:(id)a4;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isValid;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
