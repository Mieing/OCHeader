@class UIColor, NSString, UIImage, UIViewController;

@interface AWENormalModeTabBarButtonParams : NSObject

@property (nonatomic) long long tabBarItemType;
@property (nonatomic) long long UIStyle;
@property (retain, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) UIImage *normalImage;
@property (retain, nonatomic) UIImage *selectedImage;
@property (nonatomic) double verticalStyleImageHeight;
@property (nonatomic) double avatarIconSize;
@property (nonatomic) double verticalStyleInnerGapY;
@property (nonatomic) double verticalStyleTopMargin;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long fontWeight;
@property (nonatomic) double fontSize;
@property (retain, nonatomic) UIColor *normalLightTextColor;
@property (retain, nonatomic) UIColor *selectedLightTextColor;
@property (retain, nonatomic) UIColor *normalDarkTextColor;
@property (retain, nonatomic) UIColor *selectedDarkTextColor;
@property (nonatomic) double pureIconStyleIconHeight;

- (void).cxx_destruct;

@end
