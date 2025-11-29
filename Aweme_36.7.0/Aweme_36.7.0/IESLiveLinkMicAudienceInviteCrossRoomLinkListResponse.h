@class IESLiveLinkMicAudienceInviteCrossRoomLinkListResponse_ResponseData;

@interface IESLiveLinkMicAudienceInviteCrossRoomLinkListResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveLinkMicAudienceInviteCrossRoomLinkListResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
