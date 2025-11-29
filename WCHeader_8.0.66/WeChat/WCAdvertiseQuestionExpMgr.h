@class NSString, WCADQuestionStatItem;

@interface WCAdvertiseQuestionExpMgr : MMUserService <MMServiceProtocol> {
    NSString *lastReportItemId;
    WCADQuestionStatItem *adQuestItem;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getADQuestionExp:(id)a0;
- (void)statADQuestion:(id)a0;
- (id)getCurrLanguage;
- (void)test;
- (id)parseFormatString:(id)a0 translateMap:(id)a1;
- (void)tryReportWithAct:(unsigned int)a0 MenuId:(id)a1 Wording:(id)a2;
- (void)tryReport;
- (id)getLastReportItemId;
- (void)clearLastReportItemId;
- (void)reportHasnotDoQuest:(id)a0;
- (void).cxx_destruct;

@end
