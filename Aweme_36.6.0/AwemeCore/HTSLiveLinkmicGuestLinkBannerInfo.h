@class NSMutableArray;

@interface HTSLiveLinkmicGuestLinkBannerInfo : IESLivePBBaseMessage

@property (nonatomic) int bannerType;
@property (retain, nonatomic) NSMutableArray *channelUsersArray;
@property (readonly, nonatomic) unsigned long long channelUsersArray_Count;
@property (nonatomic) long long serverTimeMs;

+ (id)descriptor;

@end
