@class NSString;

@interface AWEProfileCommonComponent : AWEProfileBaseComponent <AWEProfileCommonComponentProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEUserProfileTrackerAdapterClass;

- (id)aAWEPadModuleAdapter;
- (BOOL)showPrivateAccountInfoView;
- (id)aAWEUserProfileTrackerAdapter;
- (void)openNameEditPage:(id)a0;
- (void)openRelationListPage:(BOOL)a0 type:(unsigned long long)a1 enterFrom:(id)a2 enterMethod:(id)a3;
- (void)openRelationListPage:(BOOL)a0 type:(unsigned long long)a1 enterFrom:(id)a2 enterMethod:(id)a3 extraQueryParams:(id)a4;
- (void)openRelationListPage:(BOOL)a0 userModel:(id)a1 type:(unsigned long long)a2 enterFrom:(id)a3 enterMethod:(id)a4 extraQueryParams:(id)a5;
- (void)openMyQRCode;
- (void)openEditProfilePageWithEnterFrom:(id)a0;
- (void)openAddFriendPageWithDotType:(id)a0 dotCount:(long long)a1 isAddGoldCollectShow:(long long)a2;
- (void)didTapPrivacyEnhanceLabel:(BOOL)a0;
- (void)didTapPraiseButton:(id)a0;
- (void)copyIdString:(id)a0 context:(id)a1;
- (void)showProfileMenuWithMethod:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })converRectToContainerView:(id)a0;
- (id)socialStatisticFormat:(BOOL)a0 userModel:(id)a1 type:(unsigned long long)a2 enterFrom:(id)a3 enterMethod:(id)a4 extraQueryParams:(id)a5;
- (id)createAlertViewSubtitle;
- (BOOL)containsInWhiteList:(long long)a0;
- (BOOL)isCurrentUser;
- (void)onInit;

@end
