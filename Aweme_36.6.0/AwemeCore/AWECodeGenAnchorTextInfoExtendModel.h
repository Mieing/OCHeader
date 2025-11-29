@class NSString, AWECodeGenAnchorIconInfoModel;

@interface AWECodeGenAnchorTextInfoExtendModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *leftContent;
@property (retain, nonatomic) AWECodeGenAnchorIconInfoModel *iconExtendModel;
@property (copy, nonatomic) NSString *rightContent;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
