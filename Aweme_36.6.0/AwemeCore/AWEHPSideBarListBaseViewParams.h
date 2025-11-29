@class UIFont;

@interface AWEHPSideBarListBaseViewParams : NSObject <NSCopying>

@property (retain, nonatomic) UIFont *titleLabelFont;
@property (retain, nonatomic) UIFont *subtitleLabelFont;
@property (nonatomic) double titleSubtitleMinGapX;
@property (nonatomic) double paddingX;
@property (nonatomic) double iconLen;
@property (nonatomic) double iconTitleGapX;
@property (nonatomic) double dotBadgeSize;
@property (nonatomic) double numberBadgeSize;
@property (retain, nonatomic) UIFont *numberBadgeFont;
@property (nonatomic) double badgePaddingLeft;
@property (nonatomic) double arrowLen;
@property (nonatomic) double arrowPaddingLeft;

+ (id)defaultParams;
+ (Class)aAWELeftSideBarCommonAdapterClass;
+ (id)p_defaultTitleLabelFont;
+ (BOOL)p_isCustomBigFontMode;
+ (id)p_defaultSubtitleLabelFont;

- (id)aAWELeftSideBarCommonAdapter;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
