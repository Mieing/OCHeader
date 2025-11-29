@class NSString;

@interface AWECodeGenAnchorToastModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *url;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
