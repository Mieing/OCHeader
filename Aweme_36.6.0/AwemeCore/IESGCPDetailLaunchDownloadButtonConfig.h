@class UIColor, NSString;

@interface IESGCPDetailLaunchDownloadButtonConfig : NSObject

@property (nonatomic) BOOL userInteractionEnabled;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) UIColor *borderColor;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *titleColor;
@property (copy, nonatomic) NSString *subTitle;
@property (retain, nonatomic) UIColor *subTitleColor;
@property (nonatomic) BOOL isImageShow;
@property (copy, nonatomic) NSString *iconURL;
@property (copy, nonatomic) NSString *subWebpURL;
@property (nonatomic) double cornerRadius;
@property (nonatomic) BOOL isDoubleStyle;
@property (nonatomic) BOOL onlyUpdateStyleAndColors;

+ (id)betaTestDownloadButtonConfigFrom:(id)a0 contentStyle:(id)a1 buttonText:(id)a2;
+ (id)gradientCurrentThemeConfigWithProgress:(double)a0 currentThemeConfig:(id)a1 halfScreenThemeConfig:(id)a2 fullScreenThemeConfig:(id)a3;
+ (id)cloudLaunchButtonSupportConfigFrom:(id)a0 contentStyle:(id)a1 useHalfScreenConfig:(BOOL)a2 title:(id)a3 subtitle:(id)a4;
+ (id)supportDownloadConfigFrom:(id)a0 subTitle:(id)a1;
+ (id)notSupportDownloadConfigFrom:(id)a0 buttonText:(id)a1 useHalfScreenConfig:(BOOL)a2;
+ (id)heliumLaunchSupportConfigFrom:(id)a0 contentStyle:(id)a1 useHalfScreenConfig:(BOOL)a2;
+ (id)heliumLaunchUnSupportConfigFrom:(id)a0 contentStyle:(id)a1 useHalfScreenConfig:(BOOL)a2;
+ (id)launchDownloadButtonDisableCommonStyleFrom:(id)a0 useHalfScreenConfig:(BOOL)a1;
+ (id)launchDownloadButtonDisableCommonStyleFrom:(id)a0;
+ (id)miniPlayButtonSupportConfigFrom:(id)a0 contentStyle:(id)a1;
+ (id)testGameDownloadButtonConfigFrom:(id)a0 contentStyle:(id)a1 buttonText:(id)a2 useHalfScreenConfig:(BOOL)a3;
+ (id)testGameDownloadUnsupportedButtonConfigFrom:(id)a0 buttonText:(id)a1 useHalfScreenConfig:(BOOL)a2;

- (void).cxx_destruct;

@end
