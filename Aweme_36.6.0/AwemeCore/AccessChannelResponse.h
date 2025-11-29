@class AccessChannelResponse_ResponseData;

@interface AccessChannelResponse : IESLivePBBaseMessage

@property (retain, nonatomic) AccessChannelResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
