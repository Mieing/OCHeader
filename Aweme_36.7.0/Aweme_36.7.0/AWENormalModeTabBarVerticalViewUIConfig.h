@class UIColor, NSString, UIFont, UIImage;

@interface AWENormalModeTabBarVerticalViewUIConfig : AWENormalModeTabBarInnerViewUIConfig <AWENormalModeTabBarInnerViewUIConfigLightModeProtocol>

@property (copy, nonatomic) NSString *textValPrivate;
@property (copy, nonatomic) NSString *loadingTextValPrivate;
@property (retain, nonatomic) UIColor *normalTextColorValPrivate;
@property (retain, nonatomic) UIColor *selectedTextColorValPrivate;
@property (retain, nonatomic) UIColor *normalTextColorDarkValPrivate;
@property (retain, nonatomic) UIColor *selectedTextColorDarkValPrivate;
@property (retain, nonatomic) UIImage *normalImageValPrivate;
@property (retain, nonatomic) UIImage *selectedImageValPrivate;
@property (retain, nonatomic) UIImage *loadingImageValPrivate;
@property (retain, nonatomic) UIFont *textFontValPrivate;
@property (copy, nonatomic) id /* block */ textVal;
@property (copy, nonatomic) id /* block */ normalTextColorVal;
@property (copy, nonatomic) id /* block */ selectedTextColorVal;
@property (copy, nonatomic) id /* block */ normalTextColorDarkVal;
@property (copy, nonatomic) id /* block */ selectedTextColorDarkVal;
@property (copy, nonatomic) id /* block */ normalImageVal;
@property (copy, nonatomic) id /* block */ selectedImageVal;
@property (copy, nonatomic) id /* block */ textFontVal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)normalImage;
- (void)updateLightModeWithProgress:(double)a0;
- (id)loadingViewImage;
- (id /* block */)loadingTextVal;
- (id /* block */)loadingImageVal;
- (void).cxx_destruct;
- (id)textFont;
- (id)text;
- (id)selectedImage;
- (id)loadingText;

@end
