@class NSString, NSMutableDictionary, NSMutableArray;

@interface MemberDataLogic : NSObject <MemberDataLogicProtocol> {
    NSString *m_adminName;
    NSMutableDictionary *m_dicAllContacts;
    NSMutableArray *m_searchFilterContacts;
    NSMutableArray *m_keyArr;
    NSMutableArray *m_allContacts;
    NSMutableDictionary *m_dicMatchTip;
    NSMutableDictionary *m_dicSessionTime;
}

- (id)initWithMemberList:(id)a0 admin:(id)a1;
- (unsigned long long)getTotalCount;
- (id)getAllContacts;
- (id)addSectionKey:(id)a0;
- (void)reloadMemberList:(id)a0;
- (void)addContact:(id)a0;
- (BOOL)removeContact:(id)a0;
- (void)sortKeys;
- (void)fillSessionTime;
- (id)getKeyArray;
- (id)getKeyAtSection:(unsigned long long)a0;
- (unsigned long long)getSectionCount;
- (unsigned long long)getSectionItemCount:(unsigned long long)a0;
- (id)getItemInSection:(unsigned long long)a0 atRow:(unsigned long long)a1;
- (void)doSearch:(id)a0;
- (void)cancelSearch;
- (id)getFilteredContacts;
- (id)filtContactsByName:(id)a0;
- (id)getMatchTipForUsername:(id)a0;
- (void)sortContacts:(id)a0 matchTips:(id)a1;
- (void).cxx_destruct;

@end
