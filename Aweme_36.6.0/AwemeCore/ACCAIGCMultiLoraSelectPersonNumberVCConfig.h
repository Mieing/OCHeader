@class NSString, UIColor;

@interface ACCAIGCMultiLoraSelectPersonNumberVCConfig : NSObject

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) UIColor *bgColor;
@property (copy, nonatomic) NSString *nextButtonTitle;
@property (retain, nonatomic) UIColor *nextButtonBgColor;
@property (retain, nonatomic) UIColor *nextButtonTextColor;
@property (retain, nonatomic) UIColor *closeButtonBgColor;
@property (retain, nonatomic) UIColor *closeButtonIconColor;
@property (retain, nonatomic) UIColor *cellBgColor;
@property (retain, nonatomic) UIColor *cellTextColor;
@property (nonatomic) BOOL darkMode;

+ (id)defaultConfigWithDarkMode:(id)a0;
+ (id)defaultConfig;

- (void).cxx_destruct;

@end
