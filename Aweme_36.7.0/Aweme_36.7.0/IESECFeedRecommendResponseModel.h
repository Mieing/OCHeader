@class NSArray, NSString, NSDictionary;

@interface IESECFeedRecommendResponseModel : IESECBaseApiModel

@property (copy, nonatomic) NSArray *items;
@property (nonatomic) unsigned long long cursor;
@property (nonatomic) BOOL hasMore;
@property (readonly, copy, nonatomic) NSString *requestLogID;
@property (copy, nonatomic) NSDictionary *extraData;

+ (id)itemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
