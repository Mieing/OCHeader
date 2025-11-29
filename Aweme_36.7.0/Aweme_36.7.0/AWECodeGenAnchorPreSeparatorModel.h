@class NSString;

@interface AWECodeGenAnchorPreSeparatorModel : AWEBaseDataModel

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *differentialChar;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
