@class NSString;

@interface CJPayAppInfo : NSObject

@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) id /* block */ deviceIDBlock;
@property (copy, nonatomic) id /* block */ userIDBlock;
@property (copy, nonatomic) id /* block */ userNicknameBlock;
@property (copy, nonatomic) id /* block */ userPhoneNumberBlock;
@property (copy, nonatomic) id /* block */ accessTokenBlock;
@property (copy, nonatomic) id /* block */ userAvatarBlock;
@property (copy, nonatomic) id /* block */ infoConfigBlock;
@property (copy, nonatomic) id /* block */ reskInfoBlock;
@property (copy, nonatomic) id /* block */ networkCommonParamsBlock;
@property (copy, nonatomic) NSString *wxH5PayRefer;
@property (copy, nonatomic) NSString *wxUniversalLink;
@property (copy, nonatomic) NSString *secLinkDomain;
@property (copy, nonatomic) id /* block */ transferSecLinkSceneBlock;
@property (nonatomic) BOOL adapterIpadStyle;
@property (nonatomic) BOOL enableSaasEnv;
@property (copy, nonatomic) id /* block */ deviceScoreBlock;
@property (copy, nonatomic) id /* block */ networkQualityBlock;

- (void).cxx_destruct;

@end
