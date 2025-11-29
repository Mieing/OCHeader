@class GetTopicCardResponse_Data;

@interface GetTopicCardResponse : IESLivePBBaseMessage

@property (retain, nonatomic) GetTopicCardResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
