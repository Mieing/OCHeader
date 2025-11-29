@class UIColor;

@interface IESGCPDetailSectionReserveGameInfoThemeConfig : NSObject

@property (retain, nonatomic) UIColor *gameIconBgColor;
@property (retain, nonatomic) UIColor *gameIconBorderColor;
@property (retain, nonatomic) UIColor *gameNameColor;
@property (retain, nonatomic) UIColor *tagListItemBgColor;
@property (retain, nonatomic) UIColor *tagListItemTextColor;
@property (retain, nonatomic) UIColor *descriptionLabelTextColor;

+ (id)detailDarkStyleConfig;
+ (id)detailLightStyleConfig;
+ (id)gameInfoThemeConfigFrom:(id)a0 useHalfScreenConfig:(BOOL)a1;

- (void).cxx_destruct;

@end
