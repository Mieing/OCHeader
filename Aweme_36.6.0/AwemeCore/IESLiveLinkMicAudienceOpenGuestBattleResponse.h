@class IESLiveLinkMicAudienceOpenGuestBattleResponse_ResponseData;

@interface IESLiveLinkMicAudienceOpenGuestBattleResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveLinkMicAudienceOpenGuestBattleResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
