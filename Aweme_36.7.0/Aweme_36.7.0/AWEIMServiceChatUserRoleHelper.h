@class NSString;

@interface AWEIMServiceChatUserRoleHelper : NSObject <AWEIMServiceChatUserRoleHelperInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)isServiceBussinessRole:(id)a0;
- (BOOL)isServiceBussinessRoleIDs:(id)a0;
- (BOOL)isCServiceChatRole:(id)a0;
- (BOOL)canShowOnlineDot:(id)a0;
- (id)abResultString:(id)a0;
- (BOOL)isServiceBusinessRoleWithoutExpr:(id)a0;
- (BOOL)disableShowOldServiceChatCard:(id)a0;
- (BOOL)enableUseHighQualityMerchants:(id)a0;
- (BOOL)isHighQualityMerchants:(id)a0;
- (BOOL)shouldHiddenTopCardAccountInfo;
- (id)highQualityMerchantsUserOnlineText;
- (id)constructUserRolesParam:(BOOL)a0 conversation:(id)a1;
- (BOOL)canDisplayEnterpriseNonFriendActiveStatus:(id)a0 nonFriendActiveInfo:(id)a1;
- (BOOL)enableShowBlueVWithRoleIds:(id)a0 peerUser:(id)a1;
- (BOOL)enableShowYellowVWithRoleIds:(id)a0 peerUser:(id)a1;
- (BOOL)disableUseVoipWithRoleIds:(id)a0;
- (id)disableUseVoipRoleIdToast;
- (BOOL)enableToInsertServiceChatCard:(id)a0;
- (BOOL)isMigratedServiceBussinessRole:(id)a0;
- (BOOL)isServiceBusinessModeStateOpen:(id)a0;

@end
