@class NSString;

@interface AWEIMTaskCardSubCardModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *attention;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
