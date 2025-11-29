@class GetWindowProductResponse_Data;

@interface GetWindowProductResponse : IESLivePBBaseMessage

@property (retain, nonatomic) GetWindowProductResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
