@class NSString;

@interface AWEContentLanguageModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *code;
@property (copy, nonatomic) NSString *enName;
@property (copy, nonatomic) NSString *localName;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
