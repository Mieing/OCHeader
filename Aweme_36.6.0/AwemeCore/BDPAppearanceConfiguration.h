@class UIColor, NSDictionary;

@interface BDPAppearanceConfiguration : NSObject

@property (retain, nonatomic) UIColor *positiveColor;
@property (retain, nonatomic) UIColor *positiveTextColor;
@property (nonatomic) long long positiveItemTextColor;
@property (nonatomic) double btnCornerRadius;
@property (nonatomic) double appLogoCornerRadiusRatio;
@property (nonatomic) double avatorAppLogoCornerRadiusRatio;
@property (nonatomic) double morePanelPortraitCornerRadius;
@property (nonatomic) double morePanelLandscapeCornerRadius;
@property (nonatomic) double morePanelItemCornerRadiusRatio;
@property (retain, nonatomic) UIColor *tabBarRedDotColor;
@property (retain, nonatomic) UIColor *videoPlayedProgressColor;
@property (nonatomic) double loadingViewDismissAnimationDuration;
@property (copy, nonatomic) NSDictionary *pluginConfig;
@property (nonatomic) BOOL padFixDisable;
@property (copy, nonatomic) NSDictionary *padFixConfig;

+ (id)defaultConfiguration;

- (void)applyAppearanceConfiguration;
- (void).cxx_destruct;
- (id)init;

@end
