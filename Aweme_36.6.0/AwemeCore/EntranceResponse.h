@class EntranceResponse_ResponseData;

@interface EntranceResponse : IESLivePBBaseMessage

@property (retain, nonatomic) EntranceResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
