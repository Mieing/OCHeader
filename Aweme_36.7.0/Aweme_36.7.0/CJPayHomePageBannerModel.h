@class NSString;

@interface CJPayHomePageBannerModel : CJPayChannelModel

@property (copy, nonatomic) NSString *bannerText;
@property (copy, nonatomic) NSString *btnText;
@property (copy, nonatomic) NSString *btnAction;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (id)buildShowConfig;
- (void).cxx_destruct;

@end
