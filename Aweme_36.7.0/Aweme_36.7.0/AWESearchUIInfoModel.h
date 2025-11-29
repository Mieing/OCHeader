@class UIColor, NSNumber;

@interface AWESearchUIInfoModel : AWEBaseApiModel

@property (retain, nonatomic) UIColor *backgroundColorLight;
@property (retain, nonatomic) UIColor *backgroundColorDark;
@property (nonatomic) BOOL hideSeparator;
@property (nonatomic) BOOL enableHideDividerInFusionCard;
@property (nonatomic) BOOL activityCardBottom;
@property (nonatomic) BOOL hideTitle;
@property (nonatomic) BOOL inFloatingBgColor;
@property (nonatomic) long long lightThemeStyle;
@property (nonatomic) long long darkThemeStyle;
@property (nonatomic) unsigned long long suggestWordsConfig;
@property (nonatomic) BOOL isInBackground;
@property (nonatomic) BOOL isInRectangleBackground;
@property (nonatomic) unsigned long long cornerType;
@property (nonatomic) BOOL isWaterfallLayout;
@property (nonatomic) BOOL dividerTransparentNeedClear;
@property (nonatomic) BOOL enableCardStrongStyle;
@property (nonatomic) long long qualityStyleCornerType;
@property (nonatomic) BOOL isSingleRange;
@property (retain, nonatomic) NSNumber *marginStart;
@property (retain, nonatomic) NSNumber *marginEnd;

+ (id)backgroundColorLightJSONTransformer;
+ (id)backgroundColorDarkJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
