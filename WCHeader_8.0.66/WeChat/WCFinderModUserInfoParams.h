@class NSString, FinderNotRecommendInfo;

@interface WCFinderModUserInfoParams : NSObject

@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *signature;
@property (copy, nonatomic) NSString *coverImgUrl;
@property (copy, nonatomic) NSString *headImageUrl;
@property (copy, nonatomic) NSString *country;
@property (copy, nonatomic) NSString *province;
@property (copy, nonatomic) NSString *city;
@property (copy, nonatomic) NSString *realCountry;
@property (copy, nonatomic) NSString *realProvince;
@property (copy, nonatomic) NSString *realCity;
@property (nonatomic) int sex;
@property (nonatomic) unsigned int birthYear;
@property (nonatomic) unsigned int birthMonth;
@property (nonatomic) unsigned int birthDay;
@property (nonatomic) BOOL notShowLocation;
@property (nonatomic) BOOL notShowSex;
@property (nonatomic) BOOL notShowBirth;
@property (nonatomic) unsigned int privateSwitch;
@property (nonatomic) unsigned int finderVideoSwitch;
@property (nonatomic) unsigned int audienceMuteSwitch;
@property (nonatomic) int privacyLevel;
@property (nonatomic) int comment_privacyLevel;
@property (nonatomic) int greet_privacyLevel;
@property (retain, nonatomic) FinderNotRecommendInfo *notRecommendInfo;
@property (nonatomic) unsigned long long miniappReferenceSwitch;
@property (nonatomic) unsigned long long hiddenMentionFeedSwitch;
@property (nonatomic) unsigned long long musicForbidReproduce;
@property (nonatomic) unsigned long long showLiveDataAtProfile;
@property (nonatomic) unsigned long long mjForbidReproduce;

+ (unsigned long long)valueWithBOOL:(BOOL)a0;

- (id)init;
- (void).cxx_destruct;

@end
