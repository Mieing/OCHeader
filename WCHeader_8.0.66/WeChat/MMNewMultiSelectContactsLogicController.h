@class NSArray, NSMutableDictionary, NSString, CContact, NSMutableArray;
@protocol MMNewMultiSelectContactsLogicDelegate;

@interface MMNewMultiSelectContactsLogicController : MMObject <IFTSContactMgrExt, ContactsDataLogicDelegate>

@property (retain, nonatomic) NSMutableArray *contactsKeyArray;
@property (retain, nonatomic) NSMutableDictionary *contactsDict;
@property (retain, nonatomic) NSArray *chatroomMemberList;
@property (nonatomic) unsigned long long dataMode;
@property (retain, nonatomic) NSMutableArray *existContactList;
@property (retain, nonatomic) NSString *taskKey;
@property (retain, nonatomic) CContact *chatroomContact;
@property (retain, nonatomic) NSMutableArray *searchContactList;
@property (retain, nonatomic) NSString *searchKeyword;
@property (retain, nonatomic) NSMutableArray *strangerContactList;
@property (retain, nonatomic) NSMutableArray *selectedContacts;
@property (nonatomic) unsigned long long multiSelectLimitCount;
@property (weak, nonatomic) id<MMNewMultiSelectContactsLogicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithAllFriendContacts;
- (id)initWithChatRoomContact:(id)a0;
- (void)commonInit;
- (void)initDatasWithAllFriendContacts;
- (void)initDatasWithChatRoomContact:(id)a0;
- (void)initDatasWithAllFriendContactsAndChatroomContact;
- (void)setLimitCount:(unsigned long long)a0;
- (void)setExistCotnactArray:(id)a0;
- (id)getAllExistContact;
- (BOOL)isContactExist:(id)a0;
- (BOOL)isContactSelected:(id)a0;
- (id)getContactKeyArray;
- (id)getAllContactsWithKey:(id)a0;
- (id)getAllChatRoomContact;
- (id)getAllSearchResult;
- (id)getContactWithIndexPath:(id)a0 isSearching:(BOOL)a1;
- (void)handleContactSearchDidBegin;
- (void)handleContactSearchWithKeyword:(id)a0;
- (void)handleContactSearchDidExit;
- (void)handleContactsTableViewSelectWithIndexPath:(id)a0 isSearching:(BOOL)a1;
- (id)getAllSelectedContacts;
- (unsigned long long)getCurrentSelectedContactCount;
- (BOOL)hasSelectedContact;
- (void)handleUnSelectWithContact:(id)a0;
- (BOOL)onFilterContactCandidate:(id)a0;
- (void)onContactsDataChange;
- (void)removeSelectContact:(id)a0;
- (void)addContact:(id)a0;
- (id)addSectionKey:(id)a0;
- (void)handleContactSearchInAllFriendsBegin;
- (void)searchContactInAllFriendsWithKeyword:(id)a0;
- (void)handleContactSearchInAllFriendsExit;
- (void)delaySearch:(id)a0;
- (void)onFTSContactSearchFinish:(id)a0;
- (void)handleContactSearchInChatRoomMemberListBegin;
- (void)searchContactInChatRoomMemberListWithKeyword:(id)a0;
- (void)handleContactSearchChatRoomMemberListExit;
- (id)doChatRoomSearch:(id)a0;
- (void).cxx_destruct;

@end
