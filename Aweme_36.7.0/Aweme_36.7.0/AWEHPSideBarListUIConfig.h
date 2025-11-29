@interface AWEHPSideBarListUIConfig : AWEBaseBizConfigModel

@property (readonly, nonatomic) double iconSize;
@property (readonly, nonatomic) double textFontSize;
@property (readonly, nonatomic) double subtextFontSize;
@property (readonly, nonatomic) double arrowSize;
@property (readonly, nonatomic) double moreFunctionContainerHeight;
@property (readonly, nonatomic) double moreFunctionIconSize;
@property (readonly, nonatomic) double moreFunctionTextFontSize;

+ (id)JSONKeyPathsByPropertyKey;

@end
