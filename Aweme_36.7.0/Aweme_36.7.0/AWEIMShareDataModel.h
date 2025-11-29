@class NSString, NSArray;

@interface AWEIMShareDataModel : IESIMBaseApiModel

@property (retain, nonatomic) NSString *token;
@property (nonatomic) double expireTime;
@property (retain, nonatomic) NSArray *shareData;
@property (nonatomic) long long lastItemID;

+ (id)shareDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
