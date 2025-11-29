@class NSString;

@interface CJPayAppInfoConfig : NSObject <NSCopying>

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) id /* block */ deviceIDBlock;
@property (copy, nonatomic) id /* block */ userIDBlock;
@property (copy, nonatomic) id /* block */ userNicknameBlock;
@property (copy, nonatomic) id /* block */ userPhoneNumberBlock;
@property (copy, nonatomic) id /* block */ accessTokenBlock;
@property (copy, nonatomic) id /* block */ userAvatarBlock;
@property (copy, nonatomic) id /* block */ infoConfigBlock;
@property (copy, nonatomic) id /* block */ networkCommonParamsBlock;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *secLinkDomain;
@property (copy, nonatomic) id /* block */ transferSecLinkSceneBlock;
@property (nonatomic) BOOL adapterIpadStyle;
@property (nonatomic) BOOL enableSaasEnv;
@property (copy, nonatomic) id /* block */ deviceScoreBlock;
@property (copy, nonatomic) id /* block */ networkQualityBlock;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
