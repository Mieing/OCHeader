@class UpdateRankStatusResponse_Data;

@interface UpdateRankStatusResponse : IESLivePBBaseMessage

@property (retain, nonatomic) UpdateRankStatusResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
