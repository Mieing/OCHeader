@class GetStreamPullDataResponse_Data;

@interface GetStreamPullDataResponse : IESLivePBBaseMessage

@property (retain, nonatomic) GetStreamPullDataResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
