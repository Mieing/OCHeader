@interface BDASifSettingsManager : NSObject

+ (id)adTrackLogJSUrlString;
+ (id)clickAutoJumpAllowList;
+ (id)autoJumpSchemeAllowList;
+ (id)autoJumpHostAllowList;
+ (id)autoJumpURLAllowList;
+ (id)clickJumpSchemeBlackList;
+ (id)clickJumpHostBlackList;
+ (id)clickJumpURLBlackList;
+ (id)allowInternalSchemeList;
+ (float)clickJumpTimeInterval;
+ (id)frobidJumpTips;
+ (id)sslErrorSchemeBlackList;
+ (id)sslErrorHostBlackList;
+ (id)sslErrorURLBlackList;
+ (id)sslErrorCodeList;
+ (id)jsAlertSchemeBlackList;
+ (id)jsAlertHostBlackList;
+ (id)jsAlertURLBlackList;
+ (id)jsConfirmSchemeBlackList;
+ (id)jsConfirmHostBlackList;
+ (id)jsConfirmURLBlackList;
+ (id)jsPromptSchemeBlackList;
+ (id)jsPromptHostBlackList;
+ (id)jsPromptURLBlackList;
+ (BOOL)enableSCCSecure;

@end
