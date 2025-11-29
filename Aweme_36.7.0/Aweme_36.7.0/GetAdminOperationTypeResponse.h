@class GetAdminOperationTypeResponse_ResponseData;

@interface GetAdminOperationTypeResponse : IESLivePBBaseMessage

@property (retain, nonatomic) GetAdminOperationTypeResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
