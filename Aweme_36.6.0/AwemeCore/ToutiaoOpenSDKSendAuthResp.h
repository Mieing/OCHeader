@class NSString, NSOrderedSet;

@interface ToutiaoOpenSDKSendAuthResp : ToutiaoOpenSDKBaseResp

@property (copy, nonatomic) NSString *code;
@property (copy, nonatomic) NSString *state;
@property (retain, nonatomic) NSOrderedSet *grantedPermissions;

- (void).cxx_destruct;

@end
