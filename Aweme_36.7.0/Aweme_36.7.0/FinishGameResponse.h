@class FinishGameResponse_ResponseData;

@interface FinishGameResponse : IESLivePBBaseMessage

@property (retain, nonatomic) FinishGameResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
