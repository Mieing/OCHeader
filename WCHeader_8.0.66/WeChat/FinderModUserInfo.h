@class NSString, FinderContactExtInfo, FinderNotRecommendInfo;

@interface FinderModUserInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *signature;
@property (retain, nonatomic) NSString *coverImgUrl;
@property (retain, nonatomic) NSString *headImgUrl;
@property (retain, nonatomic) NSString *country;
@property (retain, nonatomic) NSString *province;
@property (retain, nonatomic) NSString *city;
@property (nonatomic) int sex;
@property (nonatomic) unsigned int birthYear;
@property (nonatomic) unsigned int birthMonth;
@property (nonatomic) unsigned int birthDay;
@property (nonatomic) unsigned int notShowLocationSwitch;
@property (nonatomic) unsigned int notShowSexSwitch;
@property (nonatomic) unsigned int notShowBirthSwitch;
@property (nonatomic) unsigned int finderVideoSwitch;
@property (nonatomic) unsigned int privateSwitch;
@property (nonatomic) unsigned int mentionedSwitch;
@property (retain, nonatomic) FinderContactExtInfo *registerInfo;
@property (nonatomic) unsigned int showFinderInWxSwitch;
@property (nonatomic) unsigned int musicMvNotReproduceSwitch;
@property (retain, nonatomic) NSString *coverUrl;
@property (nonatomic) unsigned int displayMpIdentitySwitch;
@property (nonatomic) unsigned int enableMiaojianReferenceSwitch;
@property (nonatomic) unsigned int showLiveDataAtFinderProfileSwitch;
@property (nonatomic) unsigned int interactionPrivacySwitch;
@property (nonatomic) unsigned int miniappReferenceSwitch;
@property (retain, nonatomic) FinderNotRecommendInfo *notRecommendInfo;
@property (nonatomic) unsigned int enableMaterialPoiSwitch;
@property (nonatomic) unsigned int commentPrivacySwitch;
@property (nonatomic) unsigned int greetPrivacySwitch;
@property (nonatomic) unsigned int userProtectionInfoSwitch;

+ (void)initialize;

@end
