@class NSString, NSArray, AWETheaterThemeConfig, AWECodeGenTheaterGuideBarConfigModel;

@interface AWETheaterResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *theaterTitle;
@property (copy, nonatomic) NSArray *sectionList;
@property (retain, nonatomic) AWETheaterThemeConfig *themeConfig;
@property (retain, nonatomic) AWECodeGenTheaterGuideBarConfigModel *guideBarConfig;

+ (id)sectionListJSONTransformer;
+ (id)themeConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
