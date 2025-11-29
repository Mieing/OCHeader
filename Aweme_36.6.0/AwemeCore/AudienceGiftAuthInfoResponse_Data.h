@interface AudienceGiftAuthInfoResponse_Data : IESLivePBBaseMessage

@property (nonatomic) BOOL hasAudienceAuthSwitch;
@property (nonatomic) long long authSwitch;

+ (id)descriptor;

@end
