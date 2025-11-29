@class NSString;

@interface HTSLiveFansclubRelationData : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *anchorId;
@property (nonatomic) long long intimacy;
@property (nonatomic) long long intimacyLastUpdateTime;
@property (nonatomic) long long status;
@property (nonatomic) long long participateTime;
@property (nonatomic) long long autoLightUpSwitch;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) long long guardStartTime;
@property (nonatomic) long long guardExpiredTime;
@property (nonatomic) long long guardTotalTime;
@property (copy, nonatomic) NSString *guardExtra;

+ (id)descriptor;

@end
