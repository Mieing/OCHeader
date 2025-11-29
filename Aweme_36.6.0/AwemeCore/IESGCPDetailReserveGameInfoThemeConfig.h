@class UIColor;

@interface IESGCPDetailReserveGameInfoThemeConfig : NSObject

@property (nonatomic) double avatarImageRadius;
@property (retain, nonatomic) UIColor *gameNameColor;
@property (retain, nonatomic) UIColor *tagListItemBgColor;
@property (retain, nonatomic) UIColor *tagListItemTextColor;
@property (nonatomic) double tagListItemCornerRadius;
@property (retain, nonatomic) UIColor *descriptionLabelTextColor;

+ (id)detailDarkThemeConfig;
+ (id)detailLightThemeConfig;
+ (id)gameInfoThemeConfigFrom:(id)a0;

- (void).cxx_destruct;

@end
