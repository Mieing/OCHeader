@class CreateViewResponse_Data;

@interface CreateViewResponse : IESLivePBBaseMessage

@property (retain, nonatomic) CreateViewResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
