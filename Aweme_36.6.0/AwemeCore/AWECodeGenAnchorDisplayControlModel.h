@class NSString;

@interface AWECodeGenAnchorDisplayControlModel : AWEBaseDataModel

@property (nonatomic) long long moduleType;
@property (nonatomic) long long strategyType;
@property (copy, nonatomic) NSString *value;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
