@interface AWEHPSideBarNotificationUIConfig : AWEBaseBizConfigModel

@property (readonly, nonatomic) double iconSize;
@property (readonly, nonatomic) double textFontSize;
@property (readonly, nonatomic) double subtextFontSize;
@property (readonly, nonatomic) double hintFontSize;
@property (readonly, nonatomic) double optHintFontSize;

+ (id)JSONKeyPathsByPropertyKey;

@end
