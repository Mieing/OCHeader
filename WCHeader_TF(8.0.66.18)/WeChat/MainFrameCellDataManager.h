@class NSString, NSMutableDictionary, LSMFileStorage;

@interface MainFrameCellDataManager : MMUserService <IContactMgrExt, IGroupMgrExt, MultiTalkMgrExt, IMMFontMgrExt, IMMLanguageMgrExt, MMServiceProtocol> {
    NSMutableDictionary *m_dictMainFrameCellData;
    LSMFileStorage *m_fileStorage;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)reLoadLSMFileStorage;
- (void)clearOldVersionCellDataFile;
- (id)getCellData:(id)a0;
- (void)saveCellData:(id)a0;
- (void)batchSaveCellDatas:(id)a0;
- (id)updateCellData:(id)a0;
- (void)cleanupAllCache;
- (id)getCellDataByUsrName:(id)a0;
- (void)removeCellData:(id)a0;
- (void)updateTimeFieldForCellData;
- (void)onModifyContact:(id)a0;
- (void)onMultiTalkMsgCellIconChange:(id)a0;
- (void)onFontSizeChange;
- (void)onLanguageChange;
- (void)onBoldTextStatusChanged;
- (void).cxx_destruct;

@end
