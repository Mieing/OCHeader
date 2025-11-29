@class NSString, AWECodeGenUrlModel;

@interface AWECodeGenAnchorIconInfoModel : AWEBaseDataModel

@property (retain, nonatomic) AWECodeGenUrlModel *iconUrlModel;
@property (copy, nonatomic) NSString *defaultIcon;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
