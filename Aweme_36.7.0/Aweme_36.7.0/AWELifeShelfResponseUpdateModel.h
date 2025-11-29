@class NSArray, NSNumber, NSString;

@interface AWELifeShelfResponseUpdateModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *cardList;
@property (copy, nonatomic) NSNumber *serverTime;
@property (copy, nonatomic) NSString *version;

+ (id)cardListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
