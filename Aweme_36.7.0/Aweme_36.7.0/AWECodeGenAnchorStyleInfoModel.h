@class NSString;

@interface AWECodeGenAnchorStyleInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *defaultIcon;
@property (copy, nonatomic) NSString *sceneIcon;
@property (copy, nonatomic) NSString *extra;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
