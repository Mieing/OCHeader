@class NSString, Color, ShowIcon;

@interface RestrictRule : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *ruleDesc;
@property (nonatomic) BOOL canPass;
@property (retain, nonatomic) Color *color;
@property (retain, nonatomic) ShowIcon *showIcon;

+ (void)initialize;

@end
