@class NSArray, NSString;

@interface AWETheaterMoreFeedResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *itemList;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long offset;
@property (copy, nonatomic) NSString *sectionTitle;
@property (nonatomic) long long appletOffset;

+ (id)itemListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
