@class NSArray;

@interface AWERelatedVideoSearchVideoResponseModel : AWEAwemeResponseModel

@property (retain, nonatomic) NSArray *data;
@property (retain, nonatomic) NSArray *models;

+ (id)extraModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)awemeList;
- (void)setAwemeList:(id)a0;
- (void).cxx_destruct;

@end
