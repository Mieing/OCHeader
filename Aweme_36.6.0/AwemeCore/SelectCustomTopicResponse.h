@class SelectCustomTopicResponse_ResponseData;

@interface SelectCustomTopicResponse : IESLivePBBaseMessage

@property (retain, nonatomic) SelectCustomTopicResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
