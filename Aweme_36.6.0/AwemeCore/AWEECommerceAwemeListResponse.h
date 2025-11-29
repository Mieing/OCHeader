@class NSArray;

@interface AWEECommerceAwemeListResponse : AWEBaseApiModel

@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long cursor;
@property (copy, nonatomic) NSArray *awemeList;
@property (copy, nonatomic) NSArray *recommendInfoList;

+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
