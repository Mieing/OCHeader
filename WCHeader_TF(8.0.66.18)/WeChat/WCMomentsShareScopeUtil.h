@interface WCMomentsShareScopeUtil : NSObject

+ (BOOL)isPrivacyChangedWithNewPrivacy:(long long)a0 newTags:(id)a1 newContacts:(id)a2 originalPrivacy:(long long)a3 originalTags:(id)a4 originalContacts:(id)a5;
+ (void)getContactDataWithDataItem:(id)a0 privacy:(long long *)a1 visibleContactList:(id)a2 visibleTagNameList:(id)a3 invisibleContactList:(id)a4 invisibleTagNameList:(id)a5;
+ (void)getContactDataWithTextStateModel:(id)a0 privacy:(long long *)a1 visibleContactList:(id)a2 visibleTagNameList:(id)a3 invisibleContactList:(id)a4 invisibleTagNameList:(id)a5;

@end
