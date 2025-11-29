@class HTSLiveUser, NSString, HTSLiveDesireContributorInfo, HTSLiveDesireBannerInfo, HTSLiveLiveRoomInfo, NSMutableArray;

@interface HTSLiveDesire : IESLivePBBaseMessage

@property (nonatomic) long long desireId;
@property (copy, nonatomic) NSString *desireIdStr;
@property (nonatomic) long long desireStatus;
@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL hasUser;
@property (copy, nonatomic) NSString *desireTitle;
@property (copy, nonatomic) NSString *desireDescription;
@property (copy, nonatomic) NSString *desireNotice;
@property (nonatomic) long long desireDeadline;
@property (retain, nonatomic) NSMutableArray *desireRulesArray;
@property (readonly, nonatomic) unsigned long long desireRulesArray_Count;
@property (retain, nonatomic) HTSLiveDesireContributorInfo *desireContributorInfo;
@property (nonatomic) BOOL hasDesireContributorInfo;
@property (retain, nonatomic) NSMutableArray *giftBriefInfosArray;
@property (readonly, nonatomic) unsigned long long giftBriefInfosArray_Count;
@property (retain, nonatomic) NSMutableArray *performanceInfoArray;
@property (readonly, nonatomic) unsigned long long performanceInfoArray_Count;
@property (retain, nonatomic) HTSLiveDesireBannerInfo *desireBannerInfo;
@property (nonatomic) BOOL hasDesireBannerInfo;
@property (copy, nonatomic) NSString *desireRule;
@property (retain, nonatomic) HTSLiveLiveRoomInfo *liveRoomInfo;
@property (nonatomic) BOOL hasLiveRoomInfo;

+ (id)descriptor;

@end
