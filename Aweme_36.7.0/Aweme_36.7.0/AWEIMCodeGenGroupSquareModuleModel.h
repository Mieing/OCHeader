@class AWEIMCodeGenGroupSquareSearchModuleInfoModel, AWEIMCodeGenGroupSquareHotspotModuleInfoModel, AWEIMCodeGenGroupSquareBannerModuleInfoModel, AWEIMCodeGenGroupSquareCategoryRecommendModuleInfoModel;

@interface AWEIMCodeGenGroupSquareModuleModel : AWEBaseDataModel

@property (nonatomic) long long type;
@property (retain, nonatomic) AWEIMCodeGenGroupSquareSearchModuleInfoModel *searchModuleInfoModel;
@property (retain, nonatomic) AWEIMCodeGenGroupSquareBannerModuleInfoModel *bannerModuleInfoModel;
@property (retain, nonatomic) AWEIMCodeGenGroupSquareHotspotModuleInfoModel *hotspotModuleInfoModel;
@property (retain, nonatomic) AWEIMCodeGenGroupSquareCategoryRecommendModuleInfoModel *categoryRecommendModuleInfoModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
