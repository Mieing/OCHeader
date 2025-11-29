@class GetWebcastInfoResponse_Data;

@interface GetWebcastInfoResponse : IESLivePBBaseMessage

@property (retain, nonatomic) GetWebcastInfoResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
