@class StampCustomizedResponse_ResponseData;

@interface StampCustomizedResponse : IESLivePBBaseMessage

@property (retain, nonatomic) StampCustomizedResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
