@class NSArray, AWEStickerSugWordQueryRecordModel;

@interface AWEStickerSugResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *sugList;
@property (retain, nonatomic) AWEStickerSugWordQueryRecordModel *wordsQueryRecord;

+ (id)wordsQueryRecordJSONTransformer;
+ (id)sugListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
