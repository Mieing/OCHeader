@class NSArray, AWESearchVideoWordsQueryRecordModel;

@interface AWESearchRelatedVideoModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *relatedWordList;
@property (retain, nonatomic) AWESearchVideoWordsQueryRecordModel *wordsQueryRecord;

+ (id)relatedWordListJSONTransformer;
+ (id)wordsQueryRecordJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
