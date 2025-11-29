@class NSString, NSDictionary, NSOrderedSet;

@interface BDPlatformSDKGetAuthReq : BDPlatformSDKBaseReq

@property (copy, nonatomic) NSString *consumerKey;
@property (retain, nonatomic) id extraInfo;
@property (retain, nonatomic) NSDictionary *license;
@property (copy, nonatomic) NSString *responseType;
@property (retain, nonatomic) NSOrderedSet *permissions;
@property (retain, nonatomic) NSOrderedSet *additionalPermissions;
@property (copy, nonatomic) NSString *state;
@property (copy, nonatomic) NSString *appIdentity;

- (void).cxx_destruct;
- (id)init;

@end
