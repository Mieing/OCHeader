@class NSString;

@interface TTADeviceLoginUserInfo : TTAccountBaseEntity

@property (nonatomic) long long deviceLoginType;
@property (nonatomic) long long loginType;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *secUserId;
@property (copy, nonatomic) NSString *accountInfo;
@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSString *maskAccountInfo;
@property (copy, nonatomic) NSString *screenName;
@property (copy, nonatomic) NSString *avatarUrl;
@property (copy, nonatomic) NSString *platformScreenName;
@property (copy, nonatomic) NSString *platformImageUrl;
@property (copy, nonatomic) NSString *ticket;
@property (nonatomic) long long ticketExpiredTime;
@property (nonatomic) long long loginTime;

- (void).cxx_destruct;

@end
