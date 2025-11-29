@class NSString;

@interface AWECodeGenAnchorTextBackGroundModel : AWEBaseDataModel

@property (nonatomic) int radius;
@property (copy, nonatomic) NSString *color;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
