@class NSString;

@interface AWEAddressBookRecommendReasonService : HTSService <AWEAddressBookRecommendReasonService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)recommendReasonRelationTemplateWithUser:(id)a0;
- (id)recommendReasonTemplateWithUser:(id)a0;
- (id)encodedRecommendReasonTemplateWithUser:(id)a0;
- (id)recommendDisplayNameWithUser:(id)a0;
- (id)recommendDisplayRecommendReasonWithUser:(id)a0;
- (id)recommendDisplayRecommendReasonWithUser:(id)a0 useDefaultText:(BOOL)a1;
- (id)recommendReasonDataWithUser:(id)a0;
- (id)fansDisplayNameWithUser:(id)a0;
- (BOOL)enableDisplayContactsNameWithUser:(id)a0;

@end
