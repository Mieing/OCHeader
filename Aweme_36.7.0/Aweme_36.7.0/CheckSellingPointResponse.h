@class CheckSellingPointResponse_Data;

@interface CheckSellingPointResponse : IESLivePBBaseMessage

@property (retain, nonatomic) CheckSellingPointResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
