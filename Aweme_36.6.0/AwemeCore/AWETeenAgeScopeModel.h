@class NSString;

@interface AWETeenAgeScopeModel : AWEBaseApiModel

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *ageScopeDesc;
@property (nonatomic) unsigned long long ageScope;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
