@class AWEFilterDetail, AWEAwemeModel;

@interface AWEAwemeDetailResponse : AWEBaseApiModel

@property (retain, nonatomic) AWEAwemeModel *awemeDetail;
@property (retain, nonatomic) AWEFilterDetail *filterDetail;

+ (id)filterDetailJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
