@class NSArray, NSString;

@interface AWETeenDiscoverChannelFeedResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *generalModelList;
@property (copy, nonatomic) NSArray *resourceList;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) unsigned long long cursor;
@property (nonatomic) long long cardCursor;
@property (copy, nonatomic) NSString *pageToken;

+ (id)resourceListJSONTransformer;
+ (id)generalModelListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
