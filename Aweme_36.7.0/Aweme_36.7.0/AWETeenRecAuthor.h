@class NSString, AWEUserModel, NSArray;

@interface AWETeenRecAuthor : AWEBaseApiModel

@property (retain, nonatomic) AWEUserModel *author;
@property (copy, nonatomic) NSString *reason;
@property (copy, nonatomic) NSArray *videoRecList;
@property (copy, nonatomic) NSArray *awemeList;

+ (id)authorJSONTransformer;
+ (id)videoRecListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
