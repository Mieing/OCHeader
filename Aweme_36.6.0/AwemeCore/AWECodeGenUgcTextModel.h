@class NSString;

@interface AWECodeGenUgcTextModel : AWEBaseDataModel

@property (nonatomic) int type;
@property (copy, nonatomic) NSString *content;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
