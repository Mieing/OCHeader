@class OpenGameOperationResult_ResponseData;

@interface OpenGameOperationResult : IESLivePBBaseMessage

@property (retain, nonatomic) OpenGameOperationResult_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
