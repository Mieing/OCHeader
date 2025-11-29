@interface AWEHPSideBarRecentlyVisitedAppUIConfig : AWEBaseBizConfigModel

@property (readonly, nonatomic) double iconSize;
@property (readonly, nonatomic) double iconCornerRadius;
@property (readonly, nonatomic) double textFontSize;
@property (readonly, nonatomic) double verticalMargin;
@property (readonly, nonatomic) double maxTextBadgeWidth;
@property (readonly, nonatomic) double bannerIconSize;
@property (readonly, nonatomic) double bannerTextFontSize;

+ (id)JSONKeyPathsByPropertyKey;

@end
