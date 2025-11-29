@class NSString, AWEURLModel;

@interface AWEECommerceEcomButtonAreaModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) AWEURLModel *iconImg;
@property (copy, nonatomic) NSString *coverImg;
@property (nonatomic) long long paddingLeft;
@property (nonatomic) long long paddingRight;
@property (copy, nonatomic) NSString *position;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
