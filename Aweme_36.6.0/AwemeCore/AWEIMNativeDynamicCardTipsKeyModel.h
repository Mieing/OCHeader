@class NSString, NSDictionary;

@interface AWEIMNativeDynamicCardTipsKeyModel : AWEBaseBizConfigModel

@property (copy, nonatomic) NSString *key;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *value;
@property (retain, nonatomic) NSDictionary *ext;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
