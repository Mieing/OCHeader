@class NSString;

@interface MMLiveTipsBarUserActionReportHandler : MMLiveBaseReportHandler <MMLiveTaskMgrExt>

@property (retain, nonatomic) NSString *chatName;
@property (nonatomic) unsigned int livesCnt;
@property (retain, nonatomic) NSString *actionToLiveId;
@property (nonatomic) unsigned int action;
@property (nonatomic) unsigned long long actionTS;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)MMLiveReportFieldAdd_chatName;
+ (void)MMLiveReportFieldAdd_livesCnt;
+ (void)MMLiveReportFieldAdd_actionToLiveId;
+ (void)MMLiveReportFieldAdd_action;
+ (void)MMLiveReportFieldAdd_actionTS;
+ (void)initialize;

- (void)report;
- (id)init;
- (void)reportWithActionScene:(unsigned int)a0 chatName:(id)a1;
- (void)reportWithActionScene:(unsigned int)a0 liveInfo:(id)a1;
- (void)loadLivesCnt:(id)a0;
- (void).cxx_destruct;

@end
