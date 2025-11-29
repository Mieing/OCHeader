@class NSMutableDictionary;

@interface MultiSelectContactsInChatRoomReport : NSObject {
    long long m_clkEnterMutiUserModeInSearchCnt;
    long long m_clkExitMutiUserModeInSearchCnt;
    long long m_deleteBackWordsInSearchCnt;
    long long m_expandSelectedUsersInSearchCnt;
    long long m_deleteUserInSelectedUsersInSearchCnt;
    long long m_clkClearAllButtonCnt;
}

@property (retain, nonatomic) NSMutableDictionary *dicSelectionOperation;

- (id)init;
- (void)initData;
- (void)resetDicSelectionOperation;
- (void)recordContactSelectionWithType:(unsigned int)a0 arrSelectionContact:(id)a1;
- (void)clearSelectionOperationNoInFinalSelected:(id)a0;
- (void)recordClkEnterMutiUserModeInSearchCnt;
- (void)recordClkExitMutiUserModeInSearchCnt;
- (void)recordDeleteBackWordsInSearchCnt;
- (void)recordExpandSelectedUsersInSearchCnt;
- (void)recordDeleteUserInSelectedUsersInSearchCnt;
- (void)recordClkClearAllButtonCnt;
- (void)reportDataWithEnterScene:(unsigned int)a0 andExitScene:(unsigned int)a1;
- (void).cxx_destruct;

@end
