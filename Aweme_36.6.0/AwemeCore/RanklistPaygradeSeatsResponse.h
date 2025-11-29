@class RanklistPaygradeSeatsResponse_Data;

@interface RanklistPaygradeSeatsResponse : IESLivePBBaseMessage

@property (retain, nonatomic) RanklistPaygradeSeatsResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
