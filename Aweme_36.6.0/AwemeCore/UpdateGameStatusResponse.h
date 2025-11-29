@class UpdateGameStatusResponse_ResponseData;

@interface UpdateGameStatusResponse : IESLivePBBaseMessage

@property (retain, nonatomic) UpdateGameStatusResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
