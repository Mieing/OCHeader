@class UIColor, UIFont;

@interface AWENaviBarConfiguration : NSObject

@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *naviBarTitleColor;
@property (retain, nonatomic) UIFont *naviBarTitleFont;
@property (retain, nonatomic) UIFont *MainTitleFont;
@property (retain, nonatomic) UIColor *MainTitleColor;
@property (retain, nonatomic) UIFont *subTitleFont;
@property (retain, nonatomic) UIColor *subTitileColor;
@property (nonatomic) double naviBarHeight;
@property (nonatomic) double leftFixMargin;
@property (nonatomic) double rightFixMargin;
@property (nonatomic) double buttonHorizontalPadding;
@property (readonly, nonatomic) double leftContentTotalMargin;
@property (readonly, nonatomic) double rightContentTotalMargin;
@property (nonatomic) double buttonHeight;
@property (nonatomic) double buttonMinWidth;
@property (nonatomic) double buttonMaxWidth;
@property (nonatomic) double itemSpace;

+ (id)sharedConfiguration;

- (id)immersiveImageForButtonPresetStyle:(id)a0;
- (id)imageForButtonPresetStyle:(id)a0;
- (id)constImageForButtonPresetStyle:(id)a0;
- (id)imageForButtonPresetStyle:(id)a0 naviBarStyle:(unsigned long long)a1;
- (id)styleImageMap;
- (void).cxx_destruct;
- (id)init;

@end
