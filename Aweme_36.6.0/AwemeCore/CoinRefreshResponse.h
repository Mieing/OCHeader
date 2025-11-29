@class CoinRefreshResponse_Data;

@interface CoinRefreshResponse : IESLivePBBaseMessage

@property (retain, nonatomic) CoinRefreshResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
