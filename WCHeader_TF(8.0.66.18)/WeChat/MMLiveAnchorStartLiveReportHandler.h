@class NSString;

@interface MMLiveAnchorStartLiveReportHandler : MMLiveBaseReportHandler <MMLiveTaskMgrExt>

@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *roomId;
@property (nonatomic) unsigned int rulePop;
@property (nonatomic) unsigned int ruleCheck;
@property (retain, nonatomic) NSString *topic;
@property (nonatomic) unsigned int customTopic;
@property (nonatomic) unsigned int cameraStatus;
@property (nonatomic) unsigned int horizontalStatus;
@property (nonatomic) unsigned int exitType;
@property (nonatomic) unsigned int errCode;
@property (nonatomic) unsigned int roomRole;
@property (nonatomic) unsigned int roomCount;
@property (nonatomic) unsigned int cameraSwitch;
@property (nonatomic) unsigned int micSwitch;
@property (nonatomic) unsigned int castSwitch;
@property (nonatomic) unsigned int hasClickedRuleConfirm;
@property (nonatomic) unsigned int hasRealNameProcess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)MMLiveReportFieldAdd_scene;
+ (void)MMLiveReportFieldAdd_roomId;
+ (void)MMLiveReportFieldAdd_rulePop;
+ (void)MMLiveReportFieldAdd_ruleCheck;
+ (void)MMLiveReportFieldAdd_topic;
+ (void)MMLiveReportFieldAdd_customTopic;
+ (void)MMLiveReportFieldAdd_cameraStatus;
+ (void)MMLiveReportFieldAdd_horizontalStatus;
+ (void)MMLiveReportFieldAdd_exitType;
+ (void)MMLiveReportFieldAdd_errCode;
+ (void)MMLiveReportFieldAdd_roomRole;
+ (void)MMLiveReportFieldAdd_roomCount;
+ (void)MMLiveReportFieldAdd_cameraSwitch;
+ (void)MMLiveReportFieldAdd_micSwitch;
+ (void)MMLiveReportFieldAdd_castSwitch;
+ (void)MMLiveReportFieldAdd_hasClickedRuleConfirm;
+ (void)MMLiveReportFieldAdd_hasRealNameProcess;
+ (void)initialize;

- (void)report;
- (id)init;
- (void)onMMLiveStartFinishedWithLiveTask:(id)a0 startExtraInfo:(id)a1 startSuccess:(BOOL)a2;
- (void)onMMLiveVerifyFinishedWithLiveTask:(id)a0 startExtraInfo:(id)a1 verifySuccess:(BOOL)a2;
- (void)reportActionWithReportTag:(unsigned int)a0;
- (void).cxx_destruct;

@end
