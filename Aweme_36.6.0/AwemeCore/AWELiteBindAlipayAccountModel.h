@class NSString;

@interface AWELiteBindAlipayAccountModel : AWELiteBaseApiModel

@property (copy, nonatomic) NSString *alipayName;
@property (copy, nonatomic) NSString *alipayUID;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
