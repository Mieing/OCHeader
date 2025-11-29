@class AWEURLModel, AWEFeedDoubleColumnRecommendReasonTextModel;

@interface AWEFeedDoubleColumnRecommendReasonElementModel : AWEBaseApiModel

@property (retain, nonatomic) AWEFeedDoubleColumnRecommendReasonTextModel *text;
@property (retain, nonatomic) AWEURLModel *urlModel;

+ (id)urlModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)textJSONTransformer;

- (void).cxx_destruct;

@end
