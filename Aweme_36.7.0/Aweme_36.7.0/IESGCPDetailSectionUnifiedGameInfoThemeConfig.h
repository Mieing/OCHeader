@class UIColor;

@interface IESGCPDetailSectionUnifiedGameInfoThemeConfig : NSObject

@property (retain, nonatomic) UIColor *gameIconBgColor;
@property (retain, nonatomic) UIColor *gameIconBorderColor;
@property (retain, nonatomic) UIColor *gameNameColor;
@property (retain, nonatomic) UIColor *tagListItemBgColor;
@property (retain, nonatomic) UIColor *tagListItemTextColor;
@property (retain, nonatomic) UIColor *tagListItemArrowColor;
@property (retain, nonatomic) UIColor *descriptionLabelTextColor;
@property (retain, nonatomic) UIColor *descriptionViewTextColor;
@property (retain, nonatomic) UIColor *descriptionViewSplitColor;
@property (retain, nonatomic) UIColor *ratingTextColor;
@property (retain, nonatomic) UIColor *commentCountTextColor;
@property (nonatomic) double fullScreenProgress;

+ (id)detailDarkStyleConfigWith:(long long)a0;
+ (id)detailLightStyleConfigWith:(long long)a0;
+ (id)gameInfoThemeConfigFrom:(id)a0 ratingThemeType:(long long)a1;

- (void).cxx_destruct;

@end
