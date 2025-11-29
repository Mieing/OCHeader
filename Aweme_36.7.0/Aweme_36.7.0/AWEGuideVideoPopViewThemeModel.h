@class UIColor, NSString, UIImage, NSURL;

@interface AWEGuideVideoPopViewThemeModel : NSObject <AWEGuideVideoPopViewThemeModelProtocol>

@property (nonatomic) long long popViewStyle;
@property (retain, nonatomic) UIColor *leftBtnBgColor;
@property (retain, nonatomic) UIColor *leftBtnTitleColor;
@property (retain, nonatomic) UIColor *rightBtnBgColor;
@property (retain, nonatomic) UIColor *rightBtnTitleColor;
@property (retain, nonatomic) UIImage *rightBtnIcon;
@property (retain, nonatomic) NSURL *rightBtnIconUrl;
@property (nonatomic) BOOL hasRemeberTips;
@property (nonatomic) BOOL remeberTipsChecked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)xiguaThemeModelWithPopViewStyle:(long long)a0;
+ (id)qingtaoThemeModelWithPopViewStyle:(long long)a0;

- (void).cxx_destruct;

@end
