@class GetUserChorusInfoResponse_ResponseData;

@interface GetUserChorusInfoResponse : IESLivePBBaseMessage

@property (retain, nonatomic) GetUserChorusInfoResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
