@class NSString, NSArray;

@interface AWEIMNativeDynamicCardTipsContent : AWEBaseBizConfigModel

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) NSArray *keys;

+ (id)keysJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
