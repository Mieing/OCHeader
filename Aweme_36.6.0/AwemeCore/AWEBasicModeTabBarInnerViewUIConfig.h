@class UIColor, NSString, UIFont, UIImage;

@interface AWEBasicModeTabBarInnerViewUIConfig : NSObject <AWEBizTabBarLightModeListenerProtocol, AWEBasicModeTabBarInnerViewUIConfigLightModeProtocol, AWEBasicModeTabBarInnerViewUIConfigProtocol>

@property (nonatomic) long long status;
@property (retain, nonatomic) UIImage *normalImage;
@property (retain, nonatomic) UIImage *selectedImage;
@property (retain, nonatomic) UIImage *loadingViewImage;
@property (nonatomic) BOOL iconRounded;
@property (nonatomic, getter=isLightMode) BOOL lightMode;
@property (readonly, nonatomic) BOOL isSelected;
@property (readonly, nonatomic) long long themeStyle;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIFont *textFont;
@property (nonatomic) BOOL textShouldTransForm;
@property (nonatomic) double iconAlpha;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
