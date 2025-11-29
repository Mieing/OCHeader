@class NSArray, NSNumber, NSString;

@interface AWETeenVideoCollectionListResponse : AWEBaseApiModel

@property (copy, nonatomic) NSArray *awemeList;
@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *version;

+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
