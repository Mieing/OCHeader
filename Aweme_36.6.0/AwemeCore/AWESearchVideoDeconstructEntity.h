@class NSString, NSDictionary, NSArray, NSNumber;

@interface AWESearchVideoDeconstructEntity : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *entityIndex;
@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSString *suggestQuery;
@property (copy, nonatomic) NSString *suggestQueryId;
@property (copy, nonatomic) NSString *entity;
@property (copy, nonatomic) NSString *reason;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *reasonExplain;
@property (copy, nonatomic) NSString *imageLink;
@property (copy, nonatomic) NSString *imageUrl;
@property (copy, nonatomic) NSString *queryType;
@property (copy, nonatomic) NSString *searchChannel;
@property (copy, nonatomic) NSString *targetChannel;
@property (copy, nonatomic) NSDictionary *bbox;
@property (copy, nonatomic) NSArray *showScope;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
