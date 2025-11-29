@class AwemeVideoDetailResponse_Data;

@interface AwemeVideoDetailResponse : IESLivePBBaseMessage

@property (retain, nonatomic) AwemeVideoDetailResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
