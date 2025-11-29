@class UIColor, NSString, UIImage;

@interface AWEAIGCLoraSuiteTipsVCConfig : NSObject

@property (retain, nonatomic) UIColor *bgColor;
@property (retain, nonatomic) UIColor *closeBtnBgColor;
@property (retain, nonatomic) UIColor *closeBtnIconColor;
@property (copy, nonatomic) NSString *lawTipsContent;
@property (retain, nonatomic) UIColor *lawTipsColor;
@property (copy, nonatomic) NSString *lawTipsSubContentNumberText;
@property (copy, nonatomic) NSString *lawTipsSubContent;
@property (retain, nonatomic) UIColor *lawTipsSubContentColor;
@property (retain, nonatomic) UIColor *centerExampleTitleColor;
@property (retain, nonatomic) UIImage *lawTextLeftCheckIcon;
@property (retain, nonatomic) UIImage *lawTextLeftCheckedIcon;
@property (retain, nonatomic) UIColor *lawTextColor;
@property (retain, nonatomic) UIColor *lawTextHighlightColor;
@property (retain, nonatomic) UIColor *captureButtonBgColor;
@property (retain, nonatomic) UIColor *captureButtonTextColor;
@property (retain, nonatomic) UIColor *captureButtonIconColor;
@property (retain, nonatomic) UIColor *albumButtonBgColor;
@property (retain, nonatomic) UIColor *albumButtonTextColor;
@property (retain, nonatomic) UIColor *albumButtonIconColor;
@property (copy, nonatomic) NSString *avatarImageURLString;
@property (copy, nonatomic) NSString *backgroundImageURLString;
@property (nonatomic) BOOL enableOptimize;

+ (id)lightStyleConfig;
+ (id)optimizeStyleConfig;
+ (id)generateLawTipsSubContentAttributedString:(id)a0 numberText:(id)a1 text:(id)a2;
+ (id)defaultConfig;
+ (id)numberText;

- (void).cxx_destruct;

@end
