@class IESLiveKtvProfitGroupChorusInviteFriendResponse_ResponseData;

@interface IESLiveKtvProfitGroupChorusInviteFriendResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveKtvProfitGroupChorusInviteFriendResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
