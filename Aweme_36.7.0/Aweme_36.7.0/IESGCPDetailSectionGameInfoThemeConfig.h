@class UIColor;

@interface IESGCPDetailSectionGameInfoThemeConfig : NSObject

@property (retain, nonatomic) UIColor *gameIconBgColor;
@property (retain, nonatomic) UIColor *gameIconBorderColor;
@property (retain, nonatomic) UIColor *gameNameColor;
@property (retain, nonatomic) UIColor *gameTagLabelTextColor;
@property (retain, nonatomic) UIColor *tagListItemBgColor;
@property (retain, nonatomic) UIColor *tagListItemTextColor;
@property (retain, nonatomic) UIColor *tagListItemArrowColor;
@property (retain, nonatomic) UIColor *descriptionLabelTextColor;
@property (retain, nonatomic) UIColor *ratingTextColor;
@property (retain, nonatomic) UIColor *commentCountTextColor;

+ (id)detailDarkStyleConfig;
+ (id)detailLightStyleConfig;
+ (id)gameInfoThemeConfigFrom:(id)a0;

- (void).cxx_destruct;

@end
