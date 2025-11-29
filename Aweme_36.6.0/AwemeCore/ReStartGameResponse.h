@class ReStartGameResponse_ResponseData;

@interface ReStartGameResponse : IESLivePBBaseMessage

@property (retain, nonatomic) ReStartGameResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
