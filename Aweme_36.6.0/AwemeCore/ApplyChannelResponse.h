@class ApplyChannelResponse_ResponseData;

@interface ApplyChannelResponse : IESLivePBBaseMessage

@property (retain, nonatomic) ApplyChannelResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
