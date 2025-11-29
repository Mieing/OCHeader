@class UIColor, NSString, NSDictionary, UIFont;

@interface IESIMContactPickerCellButtonModel : NSObject

@property (retain, nonatomic) NSDictionary *colorMap;
@property (retain, nonatomic) NSDictionary *titleMap;
@property (retain, nonatomic) NSDictionary *bgColorMap;
@property (retain, nonatomic) NSDictionary *fontMap;
@property (nonatomic) struct CGSize { double width; double height; } buttonSize;
@property (copy, nonatomic) id /* block */ onButtonClickBlock;
@property (nonatomic) BOOL isDisableMode;
@property (retain, nonatomic) NSString *disableModeTitle;
@property (retain, nonatomic) UIColor *disableModeTitleColor;
@property (retain, nonatomic) UIColor *disableModeBackgroundColor;
@property (retain, nonatomic) UIFont *disableModeTitleFont;
@property (nonatomic) unsigned long long buttonState;
@property (nonatomic) BOOL enableAfterSelected;

- (void)setTitleFont:(id)a0 forState:(unsigned long long)a1;
- (id)titleFontForState:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)setTitle:(id)a0 forState:(unsigned long long)a1;
- (id)titleForState:(unsigned long long)a0;
- (id)backgroundColorForState:(unsigned long long)a0;
- (void)setBackgroundColor:(id)a0 forState:(unsigned long long)a1;
- (void)setTitleColor:(id)a0 forState:(unsigned long long)a1;
- (id)titleColorForState:(unsigned long long)a0;

@end
