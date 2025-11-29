@class NSString, NSOrderedSet;

@interface BDPlatformSDKGetAuthResp : BDPlatformSDKBaseResp

@property (copy, nonatomic) NSString *code;
@property (copy, nonatomic) NSString *state;
@property (retain, nonatomic) NSOrderedSet *grantedPermissions;

- (void).cxx_destruct;
- (id)init;

@end
