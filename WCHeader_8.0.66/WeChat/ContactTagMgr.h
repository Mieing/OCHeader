@class NSString, NSMutableDictionary, NSArray, ContactTagCacheMgr;

@interface ContactTagMgr : MMUserService <MMServiceProtocol, MMKernelExt, IContactMgrExt, PBMessageObserverDelegate> {
    BOOL isCompleteLoadCache;
    BOOL isManulAuthOK;
    NSMutableDictionary *_dicNameToId;
    NSMutableDictionary *_dicIdToName;
    NSArray *_arrIdOrder;
    NSMutableDictionary *_dicIdToOrder;
    NSMutableDictionary *_dicOperateCache;
    ContactTagCacheMgr *m_CacheMgr;
    unsigned int lastTimeGetAllLabelsFromServer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)GetPathOfContactLabelList;
+ (id)GetPathOfContactLabelOrderList;
+ (void)reportContactTagWithReportScene:(unsigned int)a0 andActionCode:(unsigned int)a1 andHandlePage:(unsigned int)a2;

- (id)init;
- (void)dealloc;
- (void)onServiceInit;
- (void)onManulLoginOK;
- (void)onModifyContact:(id)a0;
- (void)onDeleteContact:(id)a0;
- (void)onRemoveContactFromAddressBook:(id)a0;
- (id)getContactTagIDListToNameList:(id)a0;
- (void)BuildCacheDataFromFile;
- (id)GetContactLabelItemsFromFile;
- (void)CleanCurrentTagNameAndIdCache;
- (void)SaveCacheDataToFile;
- (void)SaveCacheIdOrderToFile;
- (void)UpdateCacheData:(unsigned int)a0 LabelName:(id)a1;
- (void)ClearCacheDataWithNames:(id)a0;
- (void)ClearCacheDataWithNamePair:(id)a0;
- (void)UpdateCacheMgrWithUserNameAndIDList:(id)a0;
- (void)shouldGetAllLabelsFromServer:(id)a0;
- (void)updateCacheLabelOrder:(id)a0;
- (void)updateAllGetAllLabelsToDBWithSetOrigiTagID:(id)a0 setOrigiTagName:(id)a1 arrOrigiIdOrder:(id)a2;
- (void)updateContactTagRelationToDBWithUserName:(id)a0 nsLabelIDList:(id)a1;
- (void)updateContactTagRelationToDBWithUserName:(id)a0 arrContactTagID:(id)a1;
- (void)recordContactTagRecentlyUsedTagWithUserName:(id)a0 arrContactTagID:(id)a1 nsOrigiLabelIDList:(id)a2;
- (unsigned int)LabelNameToId:(id)a0;
- (id)IdToLabelName:(unsigned int)a0;
- (id)arrLabelNameToIdFormatString:(id)a0;
- (id)arrLabelNameToArrId:(id)a0;
- (id)arrIdListToFormatString:(id)a0;
- (id)arrIdListToTagNames:(id)a0;
- (id)getDicOfUserNameAndTagNames:(id)a0;
- (void)startSearchFromContact:(id)a0;
- (void)reportContactTagOperateLogWithFriendUserName:(id)a0 isClickAll:(BOOL)a1 currentTagItemList:(id)a2 originalTagItemList:(id)a3 currentSelectedTagIdList:(id)a4 originalSelectedTagIdList:(id)a5 editViewNewlyCreatedTags:(id)a6 editViewAddedTags:(id)a7 tableViewNewlyCreatedTags:(id)a8 tableViewAddedTags:(id)a9 stayTime:(unsigned int)a10 opResult:(BOOL)a11 remarkEditScene:(unsigned int)a12 remarkEditType:(unsigned int)a13 source:(unsigned int)a14 descWordCount:(unsigned int)a15 descPicSource:(id)a16 logpressDeleteDescPicCnt:(unsigned int)a17 detailpageDeleteDescPicCnt:(unsigned int)a18 sessionId:(id)a19;
- (void)reportContactTagOperateLog:(id)a0 isClickAll:(BOOL)a1 buttonAddNewLabelCnt:(unsigned int)a2 searchAddNewLabelCnt:(unsigned int)a3 selectAddLabelCnt:(unsigned int)a4 searchAddLabelCnt:(unsigned int)a5 oriLabelCnt:(unsigned int)a6 removedLabelCnt:(unsigned int)a7 addedLabelCnt:(unsigned int)a8 stayTime:(unsigned int)a9 totalLabelCnt:(unsigned int)a10 opResult:(unsigned int)a11 remarkEditScene:(unsigned int)a12 remarkEditType:(unsigned int)a13 source:(unsigned int)a14 descWordCount:(unsigned int)a15 descPicSource:(id)a16 logpressDeleteDescPicCnt:(unsigned int)a17 detailpageDeleteDescPicCnt:(unsigned int)a18 sessionId:(id)a19;
- (void)reportContactTagListPageWithSource:(unsigned int)a0 action:(unsigned int)a1;
- (void)reportContactTagListPageWithSource:(unsigned int)a0 action:(unsigned int)a1 operateLabelCount:(unsigned int)a2;
- (void)reportContactTagListPageWithSource:(unsigned int)a0 action:(unsigned int)a1 operateLabelCount:(unsigned int)a2 addMemberCount:(unsigned int)a3 removeMemberCount:(unsigned int)a4;
- (id)GetDicOfUserNameToTagNamesWithContacts:(id)a0;
- (id)arrIDListToNameListInternal:(id)a0;
- (id)getLabelsForContact:(id)a0;
- (id)getLabelsNameForContact:(id)a0;
- (id)getLabelsNameForStrangerWithTagIDList:(id)a0;
- (id)getContactsForLabel:(id)a0;
- (id)getDicWithUserNameForAllTag;
- (id)getContactsForTagName:(id)a0;
- (BOOL)searchLabel:(id)a0 forContact:(id)a1;
- (id)searchLabel;
- (BOOL)isAlreadyExistTagName:(id)a0;
- (id)getAllLabelName;
- (id)getAllLabelID;
- (id)getAllLabelsFromLocal;
- (id)getAllLabelsFromServer;
- (unsigned int)addLabel:(id)a0;
- (unsigned int)deleteLabel:(id)a0;
- (unsigned int)setLabelsToContact:(id)a0;
- (unsigned int)updateLabelName:(id)a0 newName:(id)a1;
- (unsigned int)updateLabelOrder:(id)a0;
- (void)OnGetAllLabels:(id)a0 Event:(unsigned int)a1;
- (void)OnAddLabel:(id)a0 Event:(unsigned int)a1;
- (void)OnDeleteLabel:(id)a0 Event:(unsigned int)a1;
- (void)OnUpdateLabelName:(id)a0 Event:(unsigned int)a1;
- (void)OnSetLabels:(id)a0 Event:(unsigned int)a1;
- (void)OnUpdateLabelOrder:(id)a0 Event:(unsigned int)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
