@class NSString;

@interface AWEOpenPayOrderResponse : AWEBaseApiModel

@property (copy, nonatomic) NSString *payInfo;

+ (id)JSONKeyPathsByPropertyKey;

- (id)payInfoDict;
- (void).cxx_destruct;

@end
