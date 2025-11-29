@interface WCMomentsPrivacyParamsFactory : NSObject

+ (id)timelineParamsFromPrivacy:(long long)a0 visibleContactList:(id)a1 visibleTagNameList:(id)a2 invisibleContactList:(id)a3 invisibleTagNameList:(id)a4;
+ (id)textStateParamsFromPrivacy:(long long)a0 visibleContactList:(id)a1 visibleTagNameList:(id)a2 invisibleContactList:(id)a3 invisibleTagNameList:(id)a4 lastPrivacy:(long long)a5 lastTagNameList:(id)a6 lastContactList:(id)a7 lastSelectTitle:(id)a8;
+ (id)newTextStateParamsFromPrivacy:(long long)a0 isPublishFirst:(BOOL)a1 invisibleContactList:(id)a2 invisibleContactTagList:(id)a3;
+ (id)finderParamsFromPrivacy:(unsigned long long)a0 invisibleContactList:(id)a1 invisibleTagNameList:(id)a2 isAllContactsSelected:(BOOL)a3;
+ (id)finderVisiblePrivacyText:(unsigned long long)a0;

@end
