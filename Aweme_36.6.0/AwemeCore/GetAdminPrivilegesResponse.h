@class GetAdminPrivilegesResponse_ResponseData;

@interface GetAdminPrivilegesResponse : IESLivePBBaseMessage

@property (retain, nonatomic) GetAdminPrivilegesResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
