@class NSString, AWENonStandardTrackModel;

@interface AWECommerceNonStandardMonitor : HTSService <AWECommerceNonStandardMonitor>

@property (copy, nonatomic) NSString *businessScene;
@property (nonatomic) BOOL shouldMonitor;
@property (retain, nonatomic) AWENonStandardTrackModel *entranceTrackModel;
@property (retain, nonatomic) AWENonStandardTrackModel *recordTrackModel;
@property (retain, nonatomic) AWENonStandardTrackModel *editTrackModel;
@property (retain, nonatomic) AWENonStandardTrackModel *publishTrackModel;
@property (retain, nonatomic) AWENonStandardTrackModel *publishStartTrackModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showDebugToastWithTrackModel:(id)a0;

- (void)onServiceInit;
- (void)monitorNonStandardResource:(id)a0 stage:(id)a1 businessScene:(id)a2;
- (void)monitorNonStandardResource:(id)a0 stage:(id)a1 businessScene:(id)a2 shootWay:(id)a3;
- (id)convertChallengeModelToTrackModel:(id)a0 stage:(id)a1;
- (id)convertMissionModelToTrackModel:(id)a0 stage:(id)a1 shootWay:(id)a2;
- (id)convertPublishModelToTrackModel:(id)a0 stage:(id)a1;
- (void)handleDifferentStageTrackModel:(id)a0;
- (BOOL)shouldMonitorNonStandardResource;
- (void)setIsCorrectInfoWithTrackModel:(id)a0 andPreTrackModel:(id)a1;
- (id)transferTrackModelToDic:(id)a0;
- (void)trackCommerceNonStandardResource;
- (void)monitorNonStandardResource:(id)a0 stage:(id)a1;
- (void)monitorNonStandardCreateAwemeWithParam:(id)a0 stage:(id)a1;
- (void).cxx_destruct;

@end
