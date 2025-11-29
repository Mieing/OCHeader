@class NSString, NSDictionary;

@interface TTADeviceLoginRequestModel : NSObject

@property (copy, nonatomic) NSString *secUserId;
@property (copy, nonatomic) NSString *userId;
@property (nonatomic) BOOL hasEncrypted;
@property (copy, nonatomic) NSString *dTicket;
@property (nonatomic) long long loginType;
@property (nonatomic) long long loginTime;
@property (copy, nonatomic) NSString *loginPlatform;
@property (copy, nonatomic) NSDictionary *extraInfo;

- (void).cxx_destruct;

@end
