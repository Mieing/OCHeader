@class NSString;

@interface AWEHomePagePerfMetricsMonitorSceneBaseParams : NSObject <NSCopying>

@property (copy, nonatomic) NSString *event;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *triggerReason;
@property (nonatomic) BOOL disableEndDispatch;
@property (nonatomic) double beginTime;

- (id)sceneIdentification;
- (id)initWithEvent:(id)a0 scene:(id)a1 triggerReason:(id)a2 disableEndDispatch:(BOOL)a3 extra:(id)a4;
- (id)initDisableDispatchInstanceWithEvent:(id)a0 scene:(id)a1 triggerReason:(id)a2;
- (id)initDefaultDispatchInstanceWithEvent:(id)a0 scene:(id)a1 triggerReason:(id)a2;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isValid;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
