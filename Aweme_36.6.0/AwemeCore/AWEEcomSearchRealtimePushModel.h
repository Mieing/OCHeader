@class NSArray;

@interface AWEEcomSearchRealtimePushModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *items;
@property (copy, nonatomic) NSArray *onCardItems;

+ (id)itemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
