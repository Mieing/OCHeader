@class NSString, NSDictionary, NSArray;

@interface IESECGoodsAddToCartResponse : IESECBaseApiModel

@property (nonatomic) long long cartCount;
@property (nonatomic) long long cartId;
@property (copy, nonatomic) NSString *toast;
@property (copy, nonatomic) NSDictionary *toastBar;
@property (copy, nonatomic) NSArray *businessLineCount;

+ (id)businessLineCountJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
