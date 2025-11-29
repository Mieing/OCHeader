@class NSString, NSNumber;

@interface AWEPOIOptionModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSNumber *code;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
