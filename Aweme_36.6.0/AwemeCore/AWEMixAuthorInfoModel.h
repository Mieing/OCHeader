@class NSString;

@interface AWEMixAuthorInfoModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *scheme;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
