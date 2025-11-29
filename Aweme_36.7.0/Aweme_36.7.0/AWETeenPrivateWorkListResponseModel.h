@class NSArray;

@interface AWETeenPrivateWorkListResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *awemeList;
@property (nonatomic) unsigned long long cursor;
@property (nonatomic) unsigned long long count;
@property (nonatomic) BOOL hasMore;

+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
