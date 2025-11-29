@class GetCustomTopicListResponse_ResponseData;

@interface GetCustomTopicListResponse : IESLivePBBaseMessage

@property (retain, nonatomic) GetCustomTopicListResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
