@class WAReportOuterMenuActionItem, NSString, NSMutableDictionary, NSMutableArray, WaReportMessageVideoActionItem;

@interface WAWebViewReportStatMgr : MMUserService <MMServiceProtocol> {
    NSMutableDictionary *m_outActionTimestampDict;
    NSMutableArray *m_mutiSelectMsgList;
    WaReportMessageVideoActionItem *_waMessageVideoReport;
    NSMutableDictionary *m_menuActionTimestampDict;
    NSMutableDictionary *m_apiActionDict;
}

@property (retain, nonatomic) WAReportOuterMenuActionItem *m_mutiSelectBaseItem;
@property (nonatomic) BOOL isOpenDebugState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registOutMenuAction:(id)a0;
- (id)outActionItemFromMgr:(unsigned long long)a0;
- (void)registOutMenuActionOnMutiSelectMsgArray:(id)a0;
- (void)reportOutMenuActionOnMutiSelectMsgResult:(unsigned long long)a0 contacts:(id)a1;
- (void)registWaMessageVideoShareAction:(id)a0;
- (id)waMessageVideoShareAction;
- (id)init;
- (void)registWebMenuAction:(unsigned long long)a0;
- (id)menuActionItemFromMgr:(unsigned long long)a0;
- (BOOL)needReportJSApiAction:(id)a0;
- (BOOL)hasJSApiEventAction:(unsigned int)a0 appId:(id)a1;
- (void)registerJSApiAction:(id)a0 callid:(unsigned int)a1 appId:(id)a2;
- (BOOL)getJSApiEventAction:(unsigned int)a0 withActionItem:(id)a1 appId:(id)a2 needRemoveEventAction:(BOOL)a3;
- (void).cxx_destruct;

@end
