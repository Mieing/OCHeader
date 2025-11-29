@interface AWEHPSideBarGridUIConfig : AWEBaseBizConfigModel

@property (readonly, nonatomic) double iconSize;
@property (readonly, nonatomic) double textFontSize;
@property (readonly, nonatomic) double moreFunctionContainerHeight;
@property (readonly, nonatomic) double moreFunctionIconSize;
@property (readonly, nonatomic) double moreFunctionTextFontSize;
@property (readonly, nonatomic) double verticalMargin;

+ (id)JSONKeyPathsByPropertyKey;

@end
