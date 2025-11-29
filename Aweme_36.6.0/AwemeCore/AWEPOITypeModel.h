@class NSString;

@interface AWEPOITypeModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *code;
@property (copy, nonatomic) NSString *name;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
