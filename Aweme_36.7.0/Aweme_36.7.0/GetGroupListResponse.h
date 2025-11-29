@class GetGroupListResponse_ResponseData;

@interface GetGroupListResponse : IESLivePBBaseMessage

@property (retain, nonatomic) GetGroupListResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
