@class NSString, IESIMCodeGenShowTipsModel;

@interface IESIMCodeGenBannerBottomGuideInfoModel : AWEBaseDataModel

@property (nonatomic) long long guideType;
@property (copy, nonatomic) NSString *prefixText;
@property (retain, nonatomic) IESIMCodeGenShowTipsModel *showTextModel;
@property (copy, nonatomic) NSString *schema;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
