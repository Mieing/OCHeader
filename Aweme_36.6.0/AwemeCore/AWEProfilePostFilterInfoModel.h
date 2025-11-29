@class NSArray;

@interface AWEProfilePostFilterInfoModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *options;

+ (id)optionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
