@class NSArray, NSNumber;

@interface AWEMVPadAuthorModelV2 : AWEBaseApiModel

@property (copy, nonatomic) NSArray *authorList;
@property (retain, nonatomic) NSNumber *offset;

+ (id)authorListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
