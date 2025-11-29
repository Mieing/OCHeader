@class AWEURLModel;

@interface AWEDetailNewTrendRelatedResponseAuthorModel : AWEBaseApiModel

@property (nonatomic) long long authorUserID;
@property (retain, nonatomic) AWEURLModel *urlModel;

+ (id)urlModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
