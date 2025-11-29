@class CJPayDeskTheme;

@interface CJPayCurrentTheme : NSObject

@property (retain, nonatomic) CJPayDeskTheme *currentTheme;
@property (retain, nonatomic) CJPayDeskTheme *withDrawTheme;
@property (nonatomic) long long showStyle;

+ (id)shared;

- (void).cxx_destruct;
- (id)bgColor;
- (id)fontColor;

@end
