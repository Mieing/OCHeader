@class MMListenMembershipJoinInfo, MMListenMembershipInfo, BaseResponse;

@interface MMListenMembershipSchemeGetResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) MMListenMembershipJoinInfo *joinMembershipInfo;
@property (retain, nonatomic) MMListenMembershipInfo *membershipInfo;

+ (void)initialize;

@end
