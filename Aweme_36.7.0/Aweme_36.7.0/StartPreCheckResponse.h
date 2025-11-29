@class StartPreCheckResponse_Data;

@interface StartPreCheckResponse : IESLivePBBaseMessage

@property (retain, nonatomic) StartPreCheckResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
