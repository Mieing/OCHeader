@class IESLiveLinkMicProfitGroupGameInviteFriendResponse_ResponseData;

@interface IESLiveLinkMicProfitGroupGameInviteFriendResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveLinkMicProfitGroupGameInviteFriendResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
