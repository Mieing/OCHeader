@class AWEHPTopTabRedDotUIConfig, UIColor, AWEHPTopTabItemViewUIConfig;

@interface AWEHPTopItemLayoutUIModel : NSObject

@property (nonatomic) BOOL isFirstTab;
@property (nonatomic) BOOL isUIAdaptBigFont;
@property (copy, nonatomic) id /* block */ getTopLottieFloat;
@property (nonatomic) BOOL lightThemeProgressEnable;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } itemPadding;
@property (nonatomic) struct CGVector { double dx; double dy; } badgeAnchorOffset;
@property (nonatomic) struct CGVector { double dx; double dy; } indicatorOffset;
@property (nonatomic) struct CGSize { double width; double height; } indicatorSize;
@property (retain, nonatomic) AWEHPTopTabItemViewUIConfig *uiConfig;
@property (retain, nonatomic) AWEHPTopTabRedDotUIConfig *redDotUIConfig;
@property (nonatomic) BOOL redDotNewEntranceAnimation;
@property (retain, nonatomic) UIColor *selectedDarkColor;
@property (retain, nonatomic) UIColor *selectedLightColor;
@property (retain, nonatomic) UIColor *unSelectedDarkColor;
@property (retain, nonatomic) UIColor *unSelectedLightColor;
@property (retain, nonatomic) UIColor *labelShadowColor;

- (void).cxx_destruct;
- (id)description;
- (BOOL)isValidWithError:(id *)a0;

@end
