@class IESLiveLinkMicAudienceGetHamletAvatarListResponse_ResponseData;

@interface IESLiveLinkMicAudienceGetHamletAvatarListResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveLinkMicAudienceGetHamletAvatarListResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
