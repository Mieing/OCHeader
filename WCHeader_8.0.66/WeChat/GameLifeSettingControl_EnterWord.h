@class NSString;

@interface GameLifeSettingControl_EnterWord : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *language;

+ (void)initialize;

- (void)setLanguage:(id)a0;
- (id)language;
- (void)setDesc:(id)a0;
- (id)desc;
- (void)setTitle:(id)a0;
- (id)title;

@end
