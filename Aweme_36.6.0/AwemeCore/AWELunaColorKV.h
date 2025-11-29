@class NSString;

@interface AWELunaColorKV : AWEBaseApiModel

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *value;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
