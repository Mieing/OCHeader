@class AccessChannelReplyResponse_ResponseData;

@interface AccessChannelReplyResponse : IESLivePBBaseMessage

@property (retain, nonatomic) AccessChannelReplyResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
