@class NSArray;

@interface AWESearchVideoResponseModel : AWEAwemeResponseModel

@property (retain, nonatomic) NSArray *models;
@property (retain, nonatomic) NSArray *data;

+ (id)extraModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)awemeList;
- (void).cxx_destruct;

@end
