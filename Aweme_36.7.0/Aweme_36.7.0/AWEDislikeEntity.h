@class NSString;

@interface AWEDislikeEntity : AWEBaseApiModel

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *serverExtra;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
