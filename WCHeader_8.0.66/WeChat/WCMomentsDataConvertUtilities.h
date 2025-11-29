@interface WCMomentsDataConvertUtilities : MMObject

+ (id)finderLocationFromWCLocationInfo:(id)a0;
+ (id)contactFromUsrname:(id)a0;
+ (id)contactsForUsrnames:(id)a0;
+ (id)usrnamesForContacts:(id)a0;
+ (id)contactTagNamesForContactTagIds:(id)a0;
+ (id)contactTagIdsForContactTagNames:(id)a0;
+ (id)contactTagNameSetForContactTagIdSet:(id)a0;
+ (id)contactTagIdSetForContactTagNameSet:(id)a0;
+ (id)orderedTagNameSetFromOrderedTagIDSet:(id)a0;
+ (id)skStringsForContacts:(id)a0;
+ (id)usrnamesForSkStrings:(id)a0;
+ (id)SKBuiltinStringsFromNSStrings:(id)a0;
+ (BOOL)isValidContactForPrivacyDisplay:(id)a0;
+ (id)getValidContactsInContactTag:(id)a0;
+ (long long)getTagUserNameCount:(id)a0;
+ (id)getValidUsernames:(id)a0;
+ (id)getValidContactTags:(id)a0;
+ (unsigned long long)getChatRoomMyFriendCount:(id)a0;
+ (id)getGroupContactInContactList:(id)a0;
+ (id)genForwardUserInfoForReportWithDataItem:(id)a0 comment:(id)a1 contentType:(long long)a2 snsScene:(unsigned long long)a3;
+ (id)descriptionWithContactTagIDs:(id)a0 isDisplayTagID:(BOOL)a1;
+ (id)descriptionWithContactTagNames:(id)a0 isDisplayTagID:(BOOL)a1;
+ (id)objectsExceedThreshold:(unsigned long long)a0 array:(id)a1;
+ (id)usernamesInWSInteractions:(id)a0;
+ (unsigned long long)microMerchantInteractionSceneWithBrowseScene:(long long)a0;

@end
