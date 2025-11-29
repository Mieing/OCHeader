@class IESLiveLinkMicAudiencePrepareApplyResponse_ResponseData;

@interface IESLiveLinkMicAudiencePrepareApplyResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveLinkMicAudiencePrepareApplyResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
