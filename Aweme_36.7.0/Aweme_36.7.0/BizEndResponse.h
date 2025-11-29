@class BizEndResponse_ResponseData;

@interface BizEndResponse : IESLivePBBaseMessage

@property (retain, nonatomic) BizEndResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
