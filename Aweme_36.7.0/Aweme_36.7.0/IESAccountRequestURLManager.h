@interface IESAccountRequestURLManager : NSObject

+ (id)accountRemoveURLString;
+ (id)sendCodeURLString;
+ (id)sendVoiceCodeURLString;
+ (id)sendEmailCodeURLString;
+ (id)emailCodeLoginURLString;
+ (id)userLoginURLString;
+ (id)smsLoginURLString;
+ (id)validateMobileLoginURLString;
+ (id)trustAccountListURLString;
+ (id)switchLoginAccountURLString;
+ (id)switchRelationUserURLString;
+ (id)upsmsLoginURLString;
+ (id)vcdAccountListURLString;
+ (id)vcdSwitchAccountURLString;
+ (id)loginGuidingStrategyURLString;
+ (id)bindGuidingStrategyURLString;
+ (id)combineLoginURLString;
+ (id)rebindManualReviewResultURLString;
+ (id)manualAbandonRebindRequestURLString;
+ (id)currentLoginEnvURLString;
+ (id)carrierCombineLoginURLString;
+ (id)douyinAuthLoginURLString;
+ (id)thirdAuthLoginURLString;
+ (id)checkBeforeRegisterURLString;
+ (id)assistMobileRegisterURLString;
+ (id)mobileGetQRCodeURLString;
+ (id)checkQRConnectURLString;
+ (id)bindLoginURLString;
+ (id)passportAccountInfoURLString;
+ (id)accountListURLString;
+ (id)thirdUnbindURLString;
+ (id)certQueryAuthURLString;
+ (id)bindPhoneUpdateCheckURLString;
+ (id)panelThemeRequestURLString;

@end
