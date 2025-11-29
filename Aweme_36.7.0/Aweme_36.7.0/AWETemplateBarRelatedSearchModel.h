@class AWESearchAnchorListModel;

@interface AWETemplateBarRelatedSearchModel : AWEBaseApiModel

@property (retain, nonatomic) AWESearchAnchorListModel *suggestWordsModel;

+ (id)suggestWordsModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
