@class UIColor, NSString;

@interface BDReaderThemeConfig : NSObject

@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *linkTextColor;
@property (retain, nonatomic) UIColor *textSelectionCursorColor;
@property (retain, nonatomic) UIColor *textSelectionRectColor;
@property (retain, nonatomic) UIColor *textHighLightRectColor;
@property (copy, nonatomic) NSString *themeKey;
@property (nonatomic) unsigned long long themeStyle;
@property (retain, nonatomic) UIColor *footnoteContainerColor;
@property (retain, nonatomic) UIColor *footnoteTextColor;

- (id)colorForKey:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
