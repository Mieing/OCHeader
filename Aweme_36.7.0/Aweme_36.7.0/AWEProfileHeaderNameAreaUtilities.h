@interface AWEProfileHeaderNameAreaUtilities : NSObject

+ (id)idStrWithUserModel:(id)a0;
+ (void)recordShowContactRemarkEntranceWithContext:(id)a0;
+ (void)trackShowEditRemarks:(BOOL)a0 followStatus:(long long)a1 previousPage:(id)a2;
+ (void)trackCraftsManBillboardShowWithContext:(id)a0;
+ (void)trackCraftsManBillboardClickWithContext:(id)a0;
+ (BOOL)shouldShowIDContentViewWithContext:(id)a0;
+ (id)idStrWithContext:(id)a0;
+ (void)goToBrandBoardWithContext:(id)a0;
+ (void)goToPlayletWithContext:(id)a0;
+ (void)trackPlayletTagWithEventName:(id)a0 context:(id)a1;
+ (void)didTapSwitchAccountButton:(id)a0 isAuto:(BOOL)a1;
+ (Class)aAWEDYProfileHeaderActionControllerDOUYINLiteAdapterClass;
+ (unsigned long long)multiAccountNoticeUnreadDotStyleWithContext:(id)a0;
+ (BOOL)showVerifyBadgeWithContext:(id)a0;
+ (id)__profileVerificationDescription:(id)a0;
+ (void)showBrandInfoWithView:(id)a0 context:(id)a1;
+ (void)trackBrandInfoShowWithContext:(id)a0;
+ (void)showPlayletCraftsManBillboardWithView:(id)a0 context:(id)a1;
+ (void)showPlayletDogCardWithView:(id)a0 context:(id)a1;
+ (void)trackProfileRankWithEventName:(id)a0 context:(id)a1 params:(id)a2;
+ (BOOL)canShowNameEditBtnWithContext:(id)a0;
+ (void)didClickNicknameAction:(id)a0;
+ (void)didTapEditNameButton:(BOOL)a0 context:(id)a1;
+ (void)trackNameEditButtonClickWith:(id)a0;
+ (void)trackShowBirthdayView;
+ (void)showAliasRemarkView:(id)a0 context:(id)a1;
+ (void)didTapMultiAccountUnreadDotView:(id)a0 context:(id)a1 isAuto:(BOOL)a2;
+ (void)didTapBirthdayView:(id)a0;
+ (BOOL)showQuickSwitchWithContext:(id)a0;
+ (void)qrcodeIconTappedWithContext:(id)a0;
+ (BOOL)shouldShowPrivateLabelWithContext:(id)a0;
+ (id)verificationDescriptionWithContext:(id)a0;
+ (void)didTapVerificationLabelWithContext:(id)a0;
+ (void)trackIdentifiesShowContext:(id)a0;
+ (BOOL)disableShowContactRemarkNameEntrance:(id)a0;

- (id)aAWEDYProfileHeaderActionControllerDOUYINLiteAdapter;

@end
