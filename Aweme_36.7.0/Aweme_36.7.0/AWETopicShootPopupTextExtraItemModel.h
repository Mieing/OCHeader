@class NSNumber, NSString;

@interface AWETopicShootPopupTextExtraItemModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *startIndex;
@property (retain, nonatomic) NSNumber *endIndex;
@property (copy, nonatomic) NSString *color;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)colorJSONTransformer;

- (void).cxx_destruct;

@end
