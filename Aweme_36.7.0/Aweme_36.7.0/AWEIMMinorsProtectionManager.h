@interface AWEIMMinorsProtectionManager : AWEIMComponentBase

+ (BOOL)checkAndShowSafetyWarningVoipWithConversation:(id)a0;
+ (BOOL)checkAndShowSafetyWarningWithConversation:(id)a0;
+ (BOOL)isShowingWarning;
+ (id)securityRemindManager;
+ (BOOL)checkAndShowSafetyWarningWithType:(unsigned long long)a0 conversation:(id)a1;
+ (BOOL)shouldShowPopupWithConversation:(id)a0 type:(unsigned long long)a1;
+ (id)p_popupDictDataWithType:(unsigned long long)a0 conversation:(id)a1;
+ (void)__storeDidShowDateWithType:(unsigned long long)a0 conversationId:(id)a1;
+ (BOOL)__shouldShowByFrequencyWithType:(unsigned long long)a0;
+ (double)youthProtectionRemiderFrequency;
+ (id)getIdentityVerificationContent;

- (void)componentDidMounted:(id)a0;
- (void)handleMinorsProtectionPrivateSensitiveNty:(id)a0;

@end
