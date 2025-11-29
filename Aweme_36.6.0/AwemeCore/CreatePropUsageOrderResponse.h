@class CreatePropUsageOrderResponse_Data;

@interface CreatePropUsageOrderResponse : IESLivePBBaseMessage

@property (retain, nonatomic) CreatePropUsageOrderResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
