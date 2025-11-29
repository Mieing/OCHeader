@class NSString, NSArray;

@interface IESECGoodsInstallmentDescModel : IESECBaseApiModel

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSArray *textHigherItems;

+ (id)textHigherItemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
