@class NSString, NSArray;

@interface AWESearchAIGCHistoryPreviewConversation : AWEBaseApiModel

@property (copy, nonatomic) NSString *conversationID;
@property (copy, nonatomic) NSArray *queryList;

+ (id)queryListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
