@class HTSLiveCommon;

@interface HTSLiveDolphinSettingUpdateMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) long long settingVersion;

+ (id)descriptor;

@end
