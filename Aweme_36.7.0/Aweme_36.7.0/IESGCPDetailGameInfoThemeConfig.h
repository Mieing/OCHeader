@class UIColor;

@interface IESGCPDetailGameInfoThemeConfig : NSObject

@property (nonatomic) double avatarImageRadius;
@property (retain, nonatomic) UIColor *gameNameColor;
@property (retain, nonatomic) UIColor *gameTagLabelTextColor;
@property (retain, nonatomic) UIColor *gameTagLabelBgColor;
@property (retain, nonatomic) UIColor *tagListItemBgColor;
@property (retain, nonatomic) UIColor *tagListItemTextColor;
@property (nonatomic) double tagListItemCornerRadius;
@property (retain, nonatomic) UIColor *descriptionLabelTextColor;
@property (retain, nonatomic) UIColor *commentEntranceBgColor;
@property (retain, nonatomic) UIColor *ratingTextColor;
@property (retain, nonatomic) UIColor *commentCountTextColor;

+ (id)detailDarkStyleConfig;
+ (id)detailLightStyleConfig;
+ (id)gameInfoThemeConfigFrom:(id)a0;

- (void).cxx_destruct;

@end
