@class UIFont;

@interface AWEHPSideBarGridBaseViewParams : NSObject <NSCopying>

@property (retain, nonatomic) UIFont *titleLabelFont;
@property (nonatomic) BOOL canShowSubtitle;
@property (nonatomic) unsigned long long subtitleEnlargeType;
@property (nonatomic) double paddingY;
@property (nonatomic) double iconLen;
@property (nonatomic) double iconTitleGapY;
@property (nonatomic) double titleSubtitleGapY;
@property (nonatomic) double dotBadgeSize;
@property (nonatomic) double numberBadgeSize;
@property (retain, nonatomic) UIFont *numberBadgeFont;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (nonatomic) double popViewTargetPointGapY;

+ (id)defaultParams;
+ (Class)aAWELeftSideBarCommonAdapterClass;
+ (BOOL)p_isNewStyle;
+ (id)p_defaultTitleLabelFont;
+ (BOOL)p_isCustomBigFontMode;

- (id)aAWELeftSideBarCommonAdapter;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
