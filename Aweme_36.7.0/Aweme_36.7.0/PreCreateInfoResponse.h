@class PreCreateInfoResponse_Data;

@interface PreCreateInfoResponse : IESLivePBBaseMessage

@property (retain, nonatomic) PreCreateInfoResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
