@class NSString;

@interface AWECodeGenAnchorContainerModel : AWEBaseDataModel

@property (nonatomic) int radius;
@property (copy, nonatomic) NSString *color;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
