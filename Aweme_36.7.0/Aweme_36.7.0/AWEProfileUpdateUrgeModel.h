@class AWEProfileUrgeControlModel;

@interface AWEProfileUpdateUrgeModel : AWEBaseApiModel

@property (retain, nonatomic) AWEProfileUrgeControlModel *controlModel;

+ (id)controlModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
