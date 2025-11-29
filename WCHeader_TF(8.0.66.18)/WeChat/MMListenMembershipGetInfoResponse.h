@class MMListenMembershipInfo, BaseResponse;

@interface MMListenMembershipGetInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) MMListenMembershipInfo *membershipInfo;
@property (nonatomic) BOOL isDisableJoin;

+ (void)initialize;

@end
