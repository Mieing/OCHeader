@class CContact, NSMutableArray;

@interface ContactRelatedGroupLogic : NSObject <IContactMgrExt> {
    CContact *_contact;
    NSMutableArray *_arrRelatedGroup;
    BOOL _bSearchDone;
    BOOL _bHasSearch;
}

- (id)initWithContact:(id)a0;
- (void)trySearchRelatedGroup;
- (void)sortChatRoom:(id)a0;
- (BOOL)isSearchDone;
- (id)getContactRelatedGroup;
- (void)onContactListUpdate:(unsigned int)a0;
- (void).cxx_destruct;

@end
