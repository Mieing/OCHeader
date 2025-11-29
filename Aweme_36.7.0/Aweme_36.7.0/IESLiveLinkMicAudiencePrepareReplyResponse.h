@class IESLiveLinkMicAudiencePrepareReplyResponse_Data;

@interface IESLiveLinkMicAudiencePrepareReplyResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveLinkMicAudiencePrepareReplyResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
