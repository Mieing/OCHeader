@class NSString, NSArray;

@interface AWESearchEntranceRecommendWordsResponse : AWEBaseApiModel

@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSArray *wordList;
@property (copy, nonatomic) NSString *popBubble;
@property (copy, nonatomic) NSString *popBubbleDelay;
@property (copy, nonatomic) NSString *popBubbleText;
@property (copy, nonatomic) NSString *hideWords;
@property (nonatomic) BOOL hideSuggestWords;
@property (copy, nonatomic) NSString *itemID;
@property (nonatomic) BOOL hasShown;

+ (id)wordListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
