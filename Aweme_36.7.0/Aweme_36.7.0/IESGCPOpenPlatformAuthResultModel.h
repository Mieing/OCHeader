@class NSString;

@interface IESGCPOpenPlatformAuthResultModel : NSObject

@property (copy, nonatomic) NSString *authCode;
@property (copy, nonatomic) NSString *grantedPermissions;
@property (nonatomic) long long errorCode;
@property (copy, nonatomic) NSString *errMsg;

- (void).cxx_destruct;

@end
