@class NSString, NSArray;

@interface AWESearchEcommerceAladdinModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *aladdinID;
@property (copy, nonatomic) NSString *darkIcon;
@property (copy, nonatomic) NSString *lightIcon;
@property (copy, nonatomic) NSArray *goodsItems;
@property (nonatomic) long long version;
@property (copy, nonatomic) NSString *commodityAllText;
@property (copy, nonatomic) NSString *commodityMoreText;
@property (copy, nonatomic) NSString *foldStatus;

+ (id)aladdinIDJSONTransformer;
+ (id)goodsItemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
