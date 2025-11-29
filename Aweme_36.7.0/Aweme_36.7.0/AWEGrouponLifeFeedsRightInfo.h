@class NSArray;

@interface AWEGrouponLifeFeedsRightInfo : AWEBaseApiModel

@property (copy, nonatomic) NSArray *items;

+ (BOOL)automaticallyDefaultMapping;
+ (id)itemsJSONTransformer;

- (void).cxx_destruct;

@end
