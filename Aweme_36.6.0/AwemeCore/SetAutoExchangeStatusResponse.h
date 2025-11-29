@class SetAutoExchangeStatusResponse_ResponseData;

@interface SetAutoExchangeStatusResponse : IESLivePBBaseMessage

@property (retain, nonatomic) SetAutoExchangeStatusResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
