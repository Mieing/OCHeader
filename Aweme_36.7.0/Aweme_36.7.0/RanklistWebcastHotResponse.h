@class RanklistWebcastHotResponse_ResponseData;

@interface RanklistWebcastHotResponse : IESLivePBBaseMessage

@property (retain, nonatomic) RanklistWebcastHotResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
