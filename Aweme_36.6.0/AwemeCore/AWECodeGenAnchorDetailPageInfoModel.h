@class NSString;

@interface AWECodeGenAnchorDetailPageInfoModel : AWEBaseDataModel

@property (nonatomic) int panelHeight;
@property (copy, nonatomic) NSString *detailPageTitle;
@property (copy, nonatomic) NSString *detailPageDesc;
@property (copy, nonatomic) NSString *lynxInfo;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *navTitle;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
