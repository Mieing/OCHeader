@class NSString, NSMutableArray;

@interface GetTopicCardResponse_Data : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *topicTitle;
@property (retain, nonatomic) NSMutableArray *topicItemsArray;
@property (readonly, nonatomic) unsigned long long topicItemsArray_Count;
@property (copy, nonatomic) NSString *darkBgImageURL;
@property (copy, nonatomic) NSString *lightBgImageURL;

+ (id)descriptor;

@end
