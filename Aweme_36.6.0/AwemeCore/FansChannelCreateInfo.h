@class NSString;

@interface FansChannelCreateInfo : IESLivePBBaseMessage

@property (nonatomic) long long fansChannelType;
@property (nonatomic) long long groupId;
@property (copy, nonatomic) NSString *groupIdStr;
@property (nonatomic) long long expiredTime;

+ (id)descriptor;

@end
