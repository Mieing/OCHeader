@class NSString;

@interface AWERecommendWordQueryRecordModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *info;
@property (copy, nonatomic) NSString *wordsSource;
@property (copy, nonatomic) NSString *queryID;
@property (copy, nonatomic) NSString *rsWordRefer;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
