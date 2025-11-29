@class StartGameResponse_ResponseData;

@interface StartGameResponse : IESLivePBBaseMessage

@property (retain, nonatomic) StartGameResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
