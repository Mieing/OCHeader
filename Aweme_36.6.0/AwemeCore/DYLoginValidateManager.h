@interface DYLoginValidateManager : NSObject

+ (BOOL)isValidCaptcha:(id)a0;
+ (BOOL)isValidEmailCaptcha:(id)a0;
+ (unsigned long long)validEmailCodeLength;
+ (id)chinaCountryCode;
+ (unsigned long long)maxValidChineseNumberLength;
+ (unsigned long long)minPasswordLength;
+ (unsigned long long)maxPasswordLength;
+ (unsigned long long)validCapthaLength;
+ (unsigned long long)validIDNumberLength;
+ (BOOL)isChinesePhoneNumber:(id)a0;
+ (BOOL)isValidIDNumber:(id)a0;
+ (id)sharedInstance;
+ (BOOL)isValidPhoneNumber:(id)a0;
+ (id)passwordHint;
+ (BOOL)isValidPassword:(id)a0;

@end
