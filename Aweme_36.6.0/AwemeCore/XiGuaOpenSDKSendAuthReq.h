@class NSOrderedSet, NSString;

@interface XiGuaOpenSDKSendAuthReq : XiGuaOpenSDKBaseReq

@property (retain, nonatomic) NSOrderedSet *permissions;
@property (retain, nonatomic) NSOrderedSet *additionalPermissions;
@property (copy, nonatomic) NSString *state;
@property (nonatomic) BOOL mustPortrait;

- (void).cxx_destruct;

@end
