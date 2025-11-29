@class NSString, NSMutableDictionary, NSMapTable;

@interface WSTemplateConfigDevelopService : MMUserService <MMServiceProtocol> {
    NSMutableDictionary *m_matchPatternDic;
    NSMutableDictionary *m_actionSheetButtonTitleDic;
    NSMapTable *m_templateMgrMapTable;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)registerDevelopWithResourceType:(unsigned int)a0 andMatchPattern:(id)a1 andActionSheetButtonTitle:(id)a2 andTemplateMgr:(id)a3;
- (void)registerDevelopWithTemplateMgr:(id)a0;
- (void)registerDevelopWithResourceType:(unsigned int)a0 resourceSubType:(unsigned int)a1 andMatchPattern:(id)a2 andActionSheetButtonTitle:(id)a3 andTemplateMgr:(id)a4;
- (unsigned int)getMatchPatternResourceTypeByFileTitle:(id)a0;
- (unsigned int)getMatchPatternResourceSubTypeByFileTitle:(id)a0;
- (id)getActionSheetButtonTitleWithResourceType:(unsigned int)a0 resourceSubType:(unsigned int)a1;
- (id)getTemplateMgrWithResourceType:(unsigned int)a0 resourceSubType:(unsigned int)a1;
- (void).cxx_destruct;

@end
