@class GetPlayDetailResponse_Data;

@interface GetPlayDetailResponse : IESLivePBBaseMessage

@property (retain, nonatomic) GetPlayDetailResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
