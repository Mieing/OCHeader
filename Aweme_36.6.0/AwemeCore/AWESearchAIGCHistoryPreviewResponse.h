@class NSArray;

@interface AWESearchAIGCHistoryPreviewResponse : AWEBaseApiModel

@property (copy, nonatomic) NSArray *conversationList;

+ (id)conversationListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
