@class NSString;

@interface BDPlatformSDKSendUserPromotionReq : BDPlatformSDKBaseReq

@property (copy, nonatomic) NSString *consumerURLScheme;
@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSString *userId;

- (void).cxx_destruct;
- (id)init;

@end
