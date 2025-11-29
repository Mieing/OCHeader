@class HTSLiveUser, NSString, HTSLiveCommon, HTSLiveText, HTSLivePublicAreaCommon;

@interface HTSLiveSecretChatMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL hasUser;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) HTSLiveText *displayText;
@property (nonatomic) BOOL hasDisplayText;
@property (nonatomic) long long type;
@property (retain, nonatomic) HTSLivePublicAreaCommon *publicAreaCommon;
@property (nonatomic) BOOL hasPublicAreaCommon;
@property (retain, nonatomic) HTSLiveText *suffixText;
@property (nonatomic) BOOL hasSuffixText;

+ (id)descriptor;

@end
