@class NSString;

@interface StatusBarStyleControl : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *color;
@property (retain, nonatomic) NSString *style;
@property (retain, nonatomic) NSString *darkModeColor;

+ (void)initialize;

- (void)setDarkModeColor:(id)a0;
- (id)darkModeColor;
- (void)setStyle:(id)a0;
- (id)style;
- (void)setColor:(id)a0;
- (id)color;

@end
