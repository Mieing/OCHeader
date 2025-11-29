@class GetRealTimeChorusInfoResponse_ResponseData;

@interface GetRealTimeChorusInfoResponse : IESLivePBBaseMessage

@property (retain, nonatomic) GetRealTimeChorusInfoResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
