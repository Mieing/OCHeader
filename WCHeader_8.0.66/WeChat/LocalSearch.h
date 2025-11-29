@interface LocalSearch : NSObject

+ (void)initialize;
+ (id)getSeperators;
+ (id)getValidKeywords:(id)a0;
+ (id)makeSearchItemFromQuery:(id)a0;
+ (id)tryGenRegexForSearchText:(id)a0 isRegex:(BOOL *)a1 isEnglish:(BOOL *)a2;
+ (BOOL)isMultiMatchText:(id)a0 searchItem:(id)a1 matchInfo:(id)a2;
+ (BOOL)isMultiMatchObject:(id)a0 object:(id)a1 matchTips:(id)a2 helpDataItem:(id)a3;
+ (BOOL)isMultiMatchObject:(id)a0 object:(id)a1 matchTips:(id)a2 helpDataItem:(id)a3 extRule:(int)a4;
+ (id)genMatchTipForObject:(id)a0 targetText:(id)a1 queryText:(id)a2 matchInfo:(id)a3 matchTypeConfig:(id)a4 matchKey:(id)a5;
+ (id)genGroupMatchTipForGroupContact:(id)a0 memberUserName:(id)a1 memberContactDisPlayName:(id)a2 fromExistMatchTip:(id)a3 withQueryText:(id)a4;
+ (id)genGroupMatchTipForGroupContact:(id)a0 memberUserName:(id)a1 memberContactDisPlayName:(id)a2 fromMatchInfo:(id)a3 withQueryText:(id)a4 andShowPrefix:(id)a5;
+ (id)mergeMultiKeywordMatchTips:(id)a0 forContact:(id)a1 withQueryText:(id)a2;
+ (id)getChatRoomMemberWithoutMyself:(id)a0 helpDataItem:(id)a1;
+ (id)getChatRoomMember:(id)a0 helpDataItem:(id)a1 ignoreSelf:(BOOL)a2;
+ (id)searchChatRoomMemberWithoutMySelf:(id)a0 groupContact:(id)a1 checkList:(id)a2 matchTips:(id)a3 helpDataItem:(id)a4 isFromMultiKeyword:(BOOL)a5;
+ (id)searchMultiKeywordFromGroupContacts:(id)a0 allContact:(id)a1 dicCheckList:(id)a2 dicMatchTip:(id)a3 helpDataItem:(id)a4;
+ (id)searchFromContacts:(id)a0 allContact:(id)a1 dicCheckList:(id)a2 dicMatchTip:(id)a3 helpDataItem:(id)a4;
+ (id)searchFromContacts:(id)a0 allContact:(id)a1 dicCheckList:(id)a2 dicMatchTip:(id)a3 helpDataItem:(id)a4 isNotSearchChatRoomMember:(BOOL)a5;
+ (BOOL)isMatchObject:(id)a0 object:(id)a1;
+ (BOOL)isMatchChatRoom:(id)a0 usrName:(id)a1 CheckList:(id)a2;
+ (id)searchFromContacts:(id)a0 allContact:(id)a1;
+ (id)searchFromFeatureItem:(id)a0 allFeatureItem:(id)a1 dicMatchTip:(id)a2;
+ (id)searchFromMinimizeTaskItem:(id)a0 allMinimizeTaskItem:(id)a1 dicMatchTip:(id)a2;
+ (id)searchContactsByName:(id)a0 allContact:(id)a1 limit:(int)a2;
+ (id)getMatchWordTip:(id)a0 withContact:(id)a1;
+ (id)searchGroupContacts:(id)a0 strictByGroupMember:(id)a1;
+ (id)searchGroupContacts:(id)a0 strictByGroupMembers:(id)a1;
+ (void)multiKeywordFastSearch:(id)a0 allContact:(id)a1 helpDataItem:(id)a2;
+ (id)ftsMsgSearchTalkerContact:(id)a0 arrContact:(id)a1 dicMatchTip:(id)a2 helpDataItem:(id)a3;
+ (BOOL)ftsMsgSearchHasTalkerContact:(id)a0 arrContact:(id)a1;
+ (id)ftsMsgSearchMemberTalkerInGroupContact:(id)a0 groupContact:(id)a1 dicMatchTip:(id)a2 helpDataItem:(id)a3;
+ (id)searchGroupMembers:(id)a0 sourceMembers:(id)a1 groupContact:(id)a2 dicCheckList:(id)a3 dicMatchTip:(id)a4 helpDataItem:(id)a5;
+ (void)SortContacts:(id)a0 dicMatchTip:(id)a1 dicSessionTime:(id)a2;
+ (void)SortGroupContacts:(id)a0 dicMatchTip:(id)a1 dicSessionTime:(id)a2 trainSort:(BOOL)a3;
+ (void)SortGroupContactsUseModel:(id)a0 dicMatchTip:(id)a1 dicSessionTime:(id)a2;
+ (void)SortContactsWithOriginalTextPriority:(id)a0 dicMatchTip:(id)a1 dicSessionTime:(id)a2 originalText:(id)a3;
+ (BOOL)checkContactContainsOriginalText:(id)a0 contact:(id)a1;

@end
