@class NSString, HTSLiveCommon, HTSLiveAIPublicScreenContainer;

@interface HTSLiveFeaturedPublicScreenSettingMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) long long status;
@property (copy, nonatomic) NSString *toast;
@property (nonatomic) long long mode;
@property (copy, nonatomic) NSString *innerTips;
@property (copy, nonatomic) NSString *settingSource;
@property (retain, nonatomic) HTSLiveAIPublicScreenContainer *aiContainer;
@property (nonatomic) BOOL hasAiContainer;

+ (id)descriptor;

@end
