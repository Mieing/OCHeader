@class UpdateGameUserInfoResponse_ResponseData;

@interface UpdateGameUserInfoResponse : IESLivePBBaseMessage

@property (retain, nonatomic) UpdateGameUserInfoResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
