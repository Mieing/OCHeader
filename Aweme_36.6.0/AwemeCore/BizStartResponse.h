@class BizStartResponse_ResponseData;

@interface BizStartResponse : IESLivePBBaseMessage

@property (retain, nonatomic) BizStartResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
