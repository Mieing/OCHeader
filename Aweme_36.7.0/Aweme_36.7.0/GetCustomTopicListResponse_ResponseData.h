@class NSMutableArray;

@interface GetCustomTopicListResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *anchorRecommendTopicListArray;
@property (readonly, nonatomic) unsigned long long anchorRecommendTopicListArray_Count;
@property (retain, nonatomic) NSMutableArray *hotChatTopicListArray;
@property (readonly, nonatomic) unsigned long long hotChatTopicListArray_Count;

+ (id)descriptor;

@end
