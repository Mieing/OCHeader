@interface AWEFriendsImpl.GeneralRedButtonManager : HTSService <AWEUserMessage, AFDGeneralRedButtonManageService> {
    void /* unknown type, empty encoding */ activityListSettingsConfigKeysArray;
    void /* unknown type, empty encoding */ generalButtonExitDict;
    void /* unknown type, empty encoding */ eCommerceAssistCompleteSet;
}

- (void)didFinishLogoutWithUid:(id)a0;
- (BOOL)isCurrentGeneralButtonTypeInHighPriorityList:(id)a0;
- (BOOL)isCurrentGeneralButtonTypeInActivityWhiteList:(id)a0;
- (BOOL)isGeneralButtonHasExitedWithModel:(id)a0 buttonType:(id)a1;
- (void)markGeneralButtonExitWithModel:(id)a0 buttonType:(id)a1;
- (void)markGeneralButtonNotExitWithModel:(id)a0 buttonType:(id)a1;
- (void)showGeneralButtonEcommercePostActivityInnerPush:(id)a0;
- (void)updateGeneralRedButtonActionBlockIfNeededWithModel:(id)a0 enterFrom:(id)a1;
- (void)addActivityNameTrackParamsTo:(id)a0 forAweme:(id)a1;
- (void)addButtonEntranceParamsTo:(id)a0 forAweme:(id)a1 isClick:(BOOL)a2;
- (void)addVideoPlayTrackParamsTo:(id)a0 forAweme:(id)a1;
- (void)addActivityNameTrackParamsTo:(id)a0 forShootEnterFrom:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
