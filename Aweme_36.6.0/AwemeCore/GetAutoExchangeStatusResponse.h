@class GetAutoExchangeStatusResponse_ResponseData;

@interface GetAutoExchangeStatusResponse : IESLivePBBaseMessage

@property (retain, nonatomic) GetAutoExchangeStatusResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
