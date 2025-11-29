@class NSString;

@interface IESLiveSendJoinMatrixInvitationParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *msgContent;
@property (copy, nonatomic) NSString *pushDetail;
@property (copy, nonatomic) NSString *inviteToken;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *secUid;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
