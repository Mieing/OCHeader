@class NSString;

@interface AWEIMTaskCardAttributeModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *value;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
