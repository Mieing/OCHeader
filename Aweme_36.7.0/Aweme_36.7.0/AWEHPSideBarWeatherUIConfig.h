@interface AWEHPSideBarWeatherUIConfig : AWEBaseBizConfigModel

@property (readonly, nonatomic) double temperatureFontSize;
@property (readonly, nonatomic) double weatherFontSize;
@property (readonly, nonatomic) double locationFontSize;
@property (readonly, nonatomic) double arrowWidth;
@property (readonly, nonatomic) double arrowHeight;

+ (id)JSONKeyPathsByPropertyKey;

@end
