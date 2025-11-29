@class NSMutableDictionary, NSDictionary, IESLivePEDecisionService, NSString;

@interface IESLiveMonitorPerceptionServiceImpl : IESLiveGeneralBaseService <IESLiveMonitorPerceptionService>

@property (nonatomic) BOOL isImportLive;
@property (nonatomic) BOOL beenImportLive;
@property (nonatomic) BOOL isAnchor;
@property (nonatomic) BOOL isColdBoot;
@property (retain, nonatomic) NSMutableDictionary *reportEventCountDic;
@property (copy, nonatomic) NSDictionary *fullConfig;
@property (retain, nonatomic) IESLivePEDecisionService *decisionService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;

- (void)serviceDidLaunch;
- (void)serviceUninstall;
- (void)serviceWillLaunchWithParam:(id)a0;
- (void)serviceRoomDataReady:(id)a0;
- (void)perceptionTask:(id)a0 checkPass:(BOOL)a1;
- (void)reportMonitorStatistic;
- (BOOL)keepALog;
- (void)excutePerceptionTask:(id)a0;
- (void).cxx_destruct;

@end
