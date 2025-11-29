@class NSString;

@interface IESLiveRealTimeChorusSingerInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *userId;
@property (nonatomic) int userType;
@property (nonatomic) long long rttMs;
@property (copy, nonatomic) NSString *userOpenid;

+ (id)descriptor;

@end
