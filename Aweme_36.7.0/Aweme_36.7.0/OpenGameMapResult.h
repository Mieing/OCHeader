@class OpenGameMapResult_ResponseData;

@interface OpenGameMapResult : IESLivePBBaseMessage

@property (retain, nonatomic) OpenGameMapResult_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
