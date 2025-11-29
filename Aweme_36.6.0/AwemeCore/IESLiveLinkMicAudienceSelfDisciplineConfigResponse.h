@class IESLiveLinkMicAudienceSelfDisciplineConfigResponse_ResponseData;

@interface IESLiveLinkMicAudienceSelfDisciplineConfigResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveLinkMicAudienceSelfDisciplineConfigResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
