@interface AWEProfileExtensionAreaHelper : NSObject

+ (long long)getInsertIndex:(id)a0 notShowCards:(id)a1 userModel:(id)a2;
+ (id)getGroupedCardsDictionaryWithUserModel:(id)a0;
+ (void)updateCardIdsWithCardIdList:(id)a0 userModel:(id)a1;
+ (BOOL)shouldEnableAutoSort;
+ (BOOL)shouldReportAutoSort;
+ (void)transferToAllCardPageWithEditing:(BOOL)a0 entranceType:(id)a1 entranceSubType:(id)a2 extraQueryParams:(id)a3 profileContext:(id)a4;
+ (Class)aAWEUserProfileModuleServiceDOUYINHTSAdaperClass;
+ (id)cardControllerClassDict;
+ (BOOL)canAccessShouldShowCardWithCardType:(unsigned long long)a0;
+ (void)trackAbilityUsage:(id)a0 cardType:(unsigned long long)a1 originValue:(id)a2 newValue:(id)a3;
+ (BOOL)canAccessShowDynamicIconWithCardType:(unsigned long long)a0;
+ (void)checkAndBindBDUGFlowAuthTokenForCard:(id)a0 profileContext:(id)a1;
+ (BOOL)isExtensionAreaRevision:(id)a0;
+ (void)transferToEditViewControllerWithEditing:(BOOL)a0 enterMethod:(id)a1;
+ (id)showExtensionAreaCardList:(id)a0;
+ (id)showCardIdsWithUserModel:(id)a0;
+ (id)allCardsWithUserModel:(id)a0;
+ (void)trackExtensionAreaEventWithConfig:(id)a0;
+ (void)trackExtensionAreaEnterDurationWithConfig:(id)a0;
+ (BOOL)canAccessUpdateTitleLabelWithCardType:(unsigned long long)a0;
+ (BOOL)canAccessUpdateImageViewWithCardType:(unsigned long long)a0;
+ (BOOL)canAccessGetImageViewWithCardType:(unsigned long long)a0;
+ (BOOL)canAccessUpdateCustomDetailViewWithCardType:(unsigned long long)a0;
+ (BOOL)isCurrentLoginUser:(id)a0;
+ (unsigned long long)extensionAreaCardStyle:(id)a0;
+ (long long)getCardIndex:(id)a0 allCards:(id)a1;
+ (id)getGroupedCardsDictionaryWithShowCardIds:(id)a0 allCards:(id)a1;
+ (BOOL)isCardVajraStyle:(unsigned long long)a0;
+ (id)profileCardEntriesInfoModel:(id)a0;
+ (id)serviceWidgetCardControllerClassDict;
+ (struct CGSize { double x0; double x1; })extensionAreaSize:(id)a0 containerWidth:(double)a1;
+ (BOOL)shouldShowProvidedServiceSection:(id)a0;
+ (id)cardViewWithCardModel:(id)a0 cardStyle:(unsigned long long)a1 shouldShrinkTitle:(BOOL)a2;
+ (BOOL)isInProfilePage;
+ (id)allCardIdsWithUserModel:(id)a0;
+ (id)getCardModelInshowExtensionAreaCardList:(unsigned long long)a0 userModel:(id)a1;
+ (BOOL)isCardInMoreFuncsWithCardType:(unsigned long long)a0 userModel:(id)a1;

- (id)aAWEUserProfileModuleServiceDOUYINHTSAdaper;

@end
