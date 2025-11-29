@class NSArray;

@interface AWESearchHPHistoryListResponse : AWEBaseApiModel

@property (copy, nonatomic) NSArray *conversationList;
@property (nonatomic) BOOL hasMore;

+ (id)conversationListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
