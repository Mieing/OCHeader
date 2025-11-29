@class IESLiveLinkMicAudienceBackupSEIUploadResponse_ResponseData;

@interface IESLiveLinkMicAudienceBackupSEIUploadResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveLinkMicAudienceBackupSEIUploadResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
