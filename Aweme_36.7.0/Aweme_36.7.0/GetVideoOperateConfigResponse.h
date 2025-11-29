@class GetVideoOperateConfigResponse_Data;

@interface GetVideoOperateConfigResponse : IESLivePBBaseMessage

@property (retain, nonatomic) GetVideoOperateConfigResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
