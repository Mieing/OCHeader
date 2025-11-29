@class NSArray, NSString;

@interface IESECWindowFeedResponse : IESECBaseApiModel

@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long cursor;
@property (copy, nonatomic) NSArray *products;
@property (retain, nonatomic) NSString *cartURL;
@property (retain, nonatomic) NSString *cartProductNum;

+ (id)productsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
