@class NSArray, AWETeenEncyKnowledgeModel, NSMutableDictionary;

@interface AWETeenGeneralWikiCardModel : AWEBaseApiModel

@property (retain, nonatomic) AWETeenEncyKnowledgeModel *knowledgeInfo;
@property (copy, nonatomic) NSArray *relatedKnowledgeList;
@property (retain, nonatomic) NSMutableDictionary *trackParams;

+ (id)knowledgeInfoJSONTransformer;
+ (id)relatedKnowledgeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
