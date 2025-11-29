@class NSString, NSNumber, NSDictionary;

@interface BDPWindowConfig : NSObject <NSCopying>

@property (copy, nonatomic) NSString *transparentTitle;
@property (copy, nonatomic) NSString *navigationStyle;
@property (copy, nonatomic) NSString *navigationBarTextStyle;
@property (copy, nonatomic) NSString *navigationBarTitleText;
@property (copy, nonatomic) NSString *navigationBarSubTitleText;
@property (copy, nonatomic) NSString *originNavigationBarTitleText;
@property (copy, nonatomic) NSString *navigationBarBackgroundColor;
@property (copy, nonatomic) NSString *useAppNameAsTitle;
@property (copy, nonatomic) NSString *backgroundColor;
@property (copy, nonatomic) NSString *backgroundColorTop;
@property (copy, nonatomic) NSString *backgroundColorBottom;
@property (copy, nonatomic) NSString *backgroundTextStyle;
@property (copy, nonatomic) NSString *renderType;
@property (retain, nonatomic) NSNumber *disableScroll;
@property (retain, nonatomic) NSNumber *disableSwipeBack;
@property (retain, nonatomic) NSNumber *onReachBottomDistance;
@property (retain, nonatomic) NSNumber *enablePullDownRefresh;
@property (retain, nonatomic) NSNumber *hideRecordMenuButton;
@property (retain, nonatomic) NSNumber *hideAnchorButton;
@property (copy, nonatomic) NSDictionary *hideAnchorButtonConfig;
@property (copy, nonatomic) NSDictionary *navigationBarItemVisibilityConfig;
@property (nonatomic) BOOL hideNavigationConfig;
@property (copy, nonatomic) NSDictionary *extends;

+ (double)cornerRadius:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (void)bootstrapLaunch;
+ (double)buttonHeight:(id)a0;
+ (id)borderColor:(id)a0 themeStyle:(long long)a1;
+ (id)tintColor:(id)a0 themeStyle:(long long)a1;
+ (void)setupBackgroundImageForButton:(id)a0 themeStyle:(long long)a1 uniqueID:(id)a2;
+ (BOOL)useNewUI:(id)a0;
+ (BOOL)useRefactor:(id)a0;
+ (double)rightCapsuleViewWidth:(id)a0;
+ (double)feedbackButtonWidth:(id)a0;
+ (double)separatorLineHeight:(id)a0;
+ (id)configFromID:(id)a0;
+ (id)backgroundColor:(id)a0 themeStyle:(long long)a1;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (BOOL)navigationBarBgTransparent;
- (void)mergeExtendIfNeeded;
- (id)navigationBarTintColorWithReverse:(BOOL)a0 uniqueID:(id)a1;
- (id)navigationBarTextStyleWithReverse:(BOOL)a0;
- (id)titleTextAttributesWithReverse:(BOOL)a0 uniqueID:(id)a1;
- (long long)statusBarStyleWithReverse:(BOOL)a0;
- (long long)themeStyleFromID:(id)a0;
- (BOOL)navigationBarDarkModelWithReverse:(BOOL)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
