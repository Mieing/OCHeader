@class HTSLiveUser, NSString, HTSLiveCommon, HTSLivePublicAreaCommon;

@interface HTSLiveSocialMessage : IESLivePBBaseMessage

@property (nonatomic) long long intimacy;
@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) long long shareType;
@property (nonatomic) long long action;
@property (copy, nonatomic) NSString *shareTarget;
@property (nonatomic) long long followCount;
@property (retain, nonatomic) HTSLivePublicAreaCommon *publicAreaCommon;
@property (nonatomic) BOOL hasPublicAreaCommon;
@property (nonatomic) long long shareTotalCount;

+ (id)descriptor;

@end
